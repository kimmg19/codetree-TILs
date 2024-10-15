#include <iostream>
using namespace std;

int main() {
    int n,min=99;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        int result=arr[j+1]-arr[j];
        if(result<=min)min=result;
        else continue;
    }
    cout<<min;

    return 0;
}