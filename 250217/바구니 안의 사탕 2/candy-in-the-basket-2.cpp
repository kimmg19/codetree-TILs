#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 401

int arr[MAX];
int maxSum;
int main() {
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int candy;
        int bucket;
        cin>>candy>>bucket;        
        arr[bucket]+=candy;
    }
    for(int i=0;i<MAX-k;i++){
        int sum=0;
        for(int j=i;j<=i+k*2;j++){
            sum+=arr[j];
            // cout<<sum<<endl;
        }   
        // cout<<"========"<<endl;
         maxSum=max(sum,maxSum);
    }
    cout<<maxSum;
    return 0;
}