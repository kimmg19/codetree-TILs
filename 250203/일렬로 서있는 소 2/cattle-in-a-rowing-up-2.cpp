#include <iostream>
using namespace std;
#define MAX 100
int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int arr[MAX]={};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        int cow1=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]>=cow1){
                int cow2=arr[j];
                for(int k=j+1;k<n;k++){
                    if(arr[k]>=cow2){
                        cnt++;
                    }
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}