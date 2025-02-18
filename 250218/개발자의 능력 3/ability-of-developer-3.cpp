#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
    int arr[6];


int GetDif(int sum){
        int sumsum=0;
    for(int i=0;i<6;i++){
        sumsum+=arr[i];
    }
    sumsum-=sum;
    // cout<<abs(sumsum-sum)<<endl;
    return abs(sumsum-sum);
}
int main() {
    // Please write your code here.
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    int sss=100000;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k=j+1;k<6;k++){
                int sum=0;
                sum=arr[i]+arr[j]+arr[k];  
                sss=min(sss,GetDif(sum));              
            }
            
        }
    }
    cout<<sss;
    return 0;
}