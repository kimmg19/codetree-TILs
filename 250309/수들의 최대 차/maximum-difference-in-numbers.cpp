#include <iostream>
#include<algorithm>
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
        int x=arr[i];//임의의 최솟값.
        for(int j=0;j<n;j++){            
            if(x>=arr[j]&&x-arr[j]<=k){
                cnt++;
            }
        }
        maxcnt=max(cnt,maxcnt);
    }
    cout<<maxcnt;
    return 0;
}