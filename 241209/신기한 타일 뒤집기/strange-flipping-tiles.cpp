#include <iostream>
using namespace std;

char arr[100000]={};
int pnt=50000;
void Fnc(int x, char r){
    if(r=='R'){
        for(int i=0;i<x;i++ ){
            arr[pnt]='B';
            if(i!=x-1)pnt++;
        }
    }else{
        for(int i=0;i<x;i++ ){
            arr[pnt]='W';
            if(i!=x-1)pnt--;

        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int white=0;
    int black=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        char r;
        cin>>x>>r;
        Fnc(x,r);
    }
    for(int i=0;i<100000;i++){        
        // cout<<i<<","<<arr[i]<<",   ";
        if(arr[i]=='B')black++;
        else if (arr[i]=='W')white++;
    }
    cout<<white<<" "<<black;
    return 0;
}