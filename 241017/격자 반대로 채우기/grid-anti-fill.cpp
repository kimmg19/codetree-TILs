#include <iostream>
using namespace std;

int main() {
    int n,cnt=1;
    cin>>n;
    int arr[n][n]={};
    
        for(int i=n-1;i>=0;i--){
        if(n-1-i%2==1){
            for(int j=n-1;j>=0;j--)
                arr[j][i]=cnt++;
        }else{
            for(int j=0;j<n;j++){
                arr[j][i]=cnt++;
            }
        }
    }
    
    

    for(int i=0;i<n;i++){        
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<"\n";
    }
    return 0;
}