#include <iostream>
using namespace std;

int main() {
    int n,min,max=0,cnt=0;;
    int maxIdx,newMaxIdx=0;
    cin>>n;
    int arr[n];
    for(int i=i;i<n;i++){
        cin>>arr[i];        

    }
    while(true){
        min=arr[cnt];
        for(int i=cnt;i<n;i++){
            if(arr[i]>min){
                maxIdx=arr[i]-min;
                if(maxIdx>newMaxIdx)
                    newMaxIdx=maxIdx;                
            }
        }
        cnt++;
        if(cnt==n)break;
    }
    cout<<newMaxIdx;
    
    


    
    

    return 0;
}