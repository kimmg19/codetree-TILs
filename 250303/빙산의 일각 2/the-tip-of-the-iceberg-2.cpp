#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int height[100]={};
    cin>>n;
    int maxcnt=0;
    int maxHeight=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        height[i]=a;
        maxHeight=max(maxHeight,a);
    }
    for(int i=1;i<=maxHeight;i++){
        int cnt=0;
        if(height[0]>i)cnt++;
        for(int j=1;j<n;j++){                   
            if(height[j]>i ){
                if(height[j-1]<=i)
                    cnt++;

            }
        }
        maxcnt=max(maxcnt,cnt);
    }
    cout<<maxcnt;
    return 0;
}