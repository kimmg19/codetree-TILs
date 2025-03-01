#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int arr[100]={};
    cin>>n;
    int maxcnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=2;i<=99;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(abs(i-arr[j])==abs(i-arr[k])){
                    // cout<<"i : "<<i<<" arr[j]: "<<arr[j]<<" arr[k]: "<<arr[k]<<endl;
                    cnt++;
                }
            }
        }
        maxcnt=max(cnt,maxcnt);
    }
    cout<<maxcnt;
    return 0;
}