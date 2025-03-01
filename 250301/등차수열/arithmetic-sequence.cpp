#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100]={};
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=100;i++){
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(abs(i-arr[j])==abs(i-arr[k])){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}