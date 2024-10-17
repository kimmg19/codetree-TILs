#include <iostream>
using namespace std;

int main() {
    int arr[][];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<"\n";
        sum=0;
    }
    return 0;
}