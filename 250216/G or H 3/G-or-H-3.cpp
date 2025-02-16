#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n,k;
    cin>>n>>k;
    int maxpoint=0;
    char arr[10001];
    for(int i=0;i<n;i++){
        int point;
        char chr;
        cin>>point>>chr;
        maxpoint=max(point,maxpoint);
        arr[point]=chr;
    }
    int maxSum=0;
    for(int i=1;i<=maxpoint-k;i++){
        int sum=0;
        for(int j=i;j<=i+k;j++){
            if(arr[j]=='G'){
                sum+=1;
            }else if(arr[j]=='H'){
                sum+=2;
            }
        }
        maxSum=max(sum,maxSum);
    }
    cout<<maxSum;
    return 0;   
}