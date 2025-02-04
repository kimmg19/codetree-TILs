#include <iostream>
using namespace std;
#define MAX 15

int main() {
    // Please write your code here.
    int r,c;
    char arr[MAX][MAX]={};
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int result=0;
    for(int i=0;i<r;i++){        
        for(int j=0;j<c;j++){
            char cur=arr[i][j];
            int cnt=0;
            for(int k=i+1;k<r;k++){
                for(int l=j+1;l<c;l++){
                    if(arr[k][l]!=cur){
                        cnt++;
                    }
                }
            }
            if(cnt==2)result++;
        }
    }
    cout<<result;
    return 0;
}