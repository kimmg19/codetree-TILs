#include <iostream>
using namespace std;

int arr[2000]={};
int pnt=1000;
void Fnc(int x,char r){
    if(r=='R'){
        for(int i=0;i<x;i++){                
            arr[pnt++]++;
        }
    }
    else
    {
        for(int i=0;i<x;i++){                
            arr[--pnt]++;
        }
    }    
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        char r;
        cin>>x>>r;
        Fnc(x,r);
    }
    int cnt=0;
    for(int i=0;i<2000;i++){
        if(arr[i]>=2){
            cnt++;
            // cout<<i-1000<<","<<arr[i]<<" ";
        }
    
    }
    cout<<cnt;
    return 0;

}