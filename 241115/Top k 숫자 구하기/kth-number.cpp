#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1000

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int k;
    int arr[MAX];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<arr[k-1];
    return 0;
}