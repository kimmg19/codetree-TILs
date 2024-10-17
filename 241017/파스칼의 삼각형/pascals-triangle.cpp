#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n][n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0||i==j)arr[i][j]=1;
            else{
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        }
    }



    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(arr[i][j]==0)continue;
            else cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}