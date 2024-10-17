#include <iostream>
using namespace std;

int main() {
    int n,m,num;
    cin>>n>>m;
    int arr[n][m]={};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>num;
            if(num=arr[i][j])cout<<"0 ";
            else cout<<"1 ";
        }
        cout<<"\n";
    }
    return 0;
}