#include <iostream>
#include <algorithm>
using namespace std;
int arr[100][1000];

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int maxb=0;;
    for (int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        maxb=max(maxb,b);
        for(int j=a;j<b;j++){
            arr[i][j]++;
        }
    }
    int maxtime=0;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(i==j)continue;            
            for(int k=0;k<maxb;k++){
                if(arr[j][k]>0)cnt++;
            }
            // cout<<i<<j<<" "<<cnt<<endl;
            maxtime=max(cnt,maxtime);
        }
    }
    cout<<maxtime-1;
    return 0;
}