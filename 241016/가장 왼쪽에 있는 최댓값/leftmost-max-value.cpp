#include <iostream>
using namespace std;

int main() {
    int n,max=0;
    cin>>n;
    int num=n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];                 
    }
    max=arr[0];
    while(num!=0){
        for(int i=0;i<num;i++){
            if(arr[i]>max){
                max=arr[i];                
                num=i;
                cout<<num+1<<" ";
            }
        }
        
        max=0;
    }
   
    

    return 0;
}