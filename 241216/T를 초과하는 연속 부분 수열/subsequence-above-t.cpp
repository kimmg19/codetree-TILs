#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000
int main() {
    // 여기에 코드를 작성해주세요.
    int n,t;

    cin>>n>>t;
    int cnt=0,maxCnt=0;
    int arr[MAX];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>t){
            cnt++;
        }else{
            cnt=0;
        }
        maxCnt=max(cnt,maxCnt);
    }
    cout<<maxCnt;
    return 0;
}