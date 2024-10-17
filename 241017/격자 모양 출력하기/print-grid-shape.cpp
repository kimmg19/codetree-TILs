#include <iostream>
using namespace std;

int main() {
    int n,m,row,col;
    cin>>n>>m;
    int arr[n][n]={};
    for(int i=0;i<m;i++){
        cin>>col>>row;
        arr[col-1][row-1]=col*row;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<"\n";
    }
    return 0;
}