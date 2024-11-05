#include <iostream>
using namespace std;

void ChangeValue(int *arr,int n){//or int arr[]
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)arr[i]/=2;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ChangeValue(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}