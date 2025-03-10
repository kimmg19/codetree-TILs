#include <iostream>
using namespace std;
int arr[1000];
int n;

bool Check(int arr[]){
    if(arr[0]==0)return false;
    for(int k=1;k<n;k++){        
        if(arr[k]==0 || arr[k]==arr[k+1] || arr[k]>n)return false;        
    }
    return true;
}

int main() {
    cin>>n;
    
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int arr2[1000]={};
    for(int i=1;i<=n;i++){
        arr2[0]=i;
        for(int j=1;j<n;j++){
            arr2[j]=arr[j-1]-arr2[j-1];
        }
        if(Check(arr2)){
            for(int k=0;k<n;k++){
                cout<<arr2[k]<<" ";
            }
            return 0;
        }
    }
    
    return 0;
}