#include <iostream>
using namespace std;

int main() {
    int n,idx=-1;
    cin>>n;
    int arr[1000]={0};
    for(int i=0;i<n;i++){
        cin>>idx;
        arr[idx]++;
    }
    for(int i=0;i<1000;i++){
        if(arr[i]==1){
            idx=i;
        }
        
    }
    cout<<idx;
    return 0;
}