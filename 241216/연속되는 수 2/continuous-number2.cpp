#include <iostream>
using namespace std;

#define MAX 1000
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[MAX];
    int n;
    int cnt=0,maxValue=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(i==0 || arr[i]==arr[i-1]){
            cnt++;
            if(cnt>=maxValue)maxValue=cnt;
        }
        else cnt=0;

        
    }
    cout<<maxValue;
    return 0;
}