#include <iostream>
using namespace std;

#define OFFSET 100
#define MAX 200
#define N 8
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int x1[OFFSET];
    int x2[OFFSET];
    int cnt=0;
    cin>>n;
    int arr[MAX][MAX]={};
    for(int k=0;k<n;k++){
        cin>>x1[k]>>x2[k];
        x1[k]+=OFFSET;
        x2[k]+=OFFSET;  
        for(int i=x1[k];i<x1[k]+N;i++){
            for(int j=x2[k];j<x2[k]+N;j++){
                if(arr[i][j]==0)cnt++;
                arr[i][j]=1;
            }
        }     
    }
    
    for(int k=0;k<n;k++){    
        
    }    
    cout<<cnt;
    return 0;
}