#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n,k;
    int arr[100];
    int maxNum=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-k+1;i++){
        int sum=0;
        for(int j=i;j<k+i;j++){
            sum+=arr[j];
        }
        
        maxNum=max(sum,maxNum);
        
    }
    cout<<maxNum;
    return 0;
}