#include <iostream>
using namespace std;

int main() {
    int n,idx;
    cin>>n;
    int max=-1;
    int arr[1000]={0};
    for(int i=0;i<n;i++){
        cin>>idx;
        arr[idx]++;
    }
    for(int i=0;i<1000;i++){
        
        if(arr[i]==1){
            max=i;
            
        }
        
    }
    cout<<max;
    return 0;
}