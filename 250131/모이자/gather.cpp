#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int arr[100]={};
    int minDis=INT_MAX;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int sum=0;
        int home=i;
        for(int j=0;j<n;j++){
            sum=sum+abs(j-home)*arr[j];
        }
        minDis=min(sum,minDis);
    }
    cout<<minDis;
    return 0;
}