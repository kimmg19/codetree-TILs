#include <iostream>
using namespace std;

int main() {
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=n;j>0;j--){
        if(arr[j-1]%2==0)cout<<arr[j-1]<<" ";
    }
    return 0;
}