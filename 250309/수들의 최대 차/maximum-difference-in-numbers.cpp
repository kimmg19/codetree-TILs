#include <iostream>
using namespace std;
int arr[1000];

int main() {
    // Please write your code here.
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxcnt=0;
    for(int i=0;i<n;i++){
        int cnt=0;
        int x=arr[i];
        for(int j=0;j<n;j++){
            if(i==j)continue;
            if(abs(arr[j]-x)<=3){
                cnt++;
            }
        }
        maxcnt=max(cnt,maxcnt);
    }
    cout<<maxcnt;
    return 0;
}