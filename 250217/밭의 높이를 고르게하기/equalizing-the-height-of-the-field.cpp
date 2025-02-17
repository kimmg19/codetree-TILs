#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>
using namespace std;

int arr[100];
int main() {
    // Please write your code here.
    int n,h,t;
    cin>>n>>h>>t;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int value=INT_MAX;
    for(int i=0;i<=n-t;i++){
        int sum=0;
        for(int j=i;j<i+t;j++){
            sum+=abs(h- arr[j]);
        }
        value=min(sum,value);
    }
    cout<<value;
    return 0;
}