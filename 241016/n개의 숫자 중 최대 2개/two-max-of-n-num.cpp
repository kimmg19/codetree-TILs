#include <iostream>

using namespace std;

int main() {
   int n,max1,max2;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[0]>=arr[1]){
        max1=arr[0];
        max2=arr[1];
    }else 
    




    {max1=arr[1];
        max2=arr[0];}
        

    for(int j=2;j<n;j++){
        if(arr[j]>=max1){
            max2=max1;
            max1=arr[j];
        }else if(arr[j]>=max2)
            max2=arr[j];
    }
    cout<<max1<<" "<<max2;   
}