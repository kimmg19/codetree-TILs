#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int arr[100]={};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mincnt=100;
    for(int i=0;i<n;i++){
        arr[i]*=2;
        for(int j=0;j<n;j++){
            int sum=0;
            for(int k=0;k<n-1;k++){
                if(j==k)continue;
                sum+=abs(arr[k]-arr[k+1]);
            }
            mincnt=min(sum,mincnt);
        }
        arr[i]/=2;
    }
    cout<<mincnt;
    return 0;
}