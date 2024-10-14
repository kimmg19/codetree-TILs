#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int j=0;j<10;j++){
        if(arr[j]%3==0)cout<<arr[j-1];
    }
    return 0;
}