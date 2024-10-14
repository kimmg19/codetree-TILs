#include <iostream>
using namespace std;

int main() {
    int a,b,sum=0;
    cin>>a>>b;

    int arr[b]={};
    while(a>1){
        arr[a%b]++;
        a=a/b;
        
    }
    for(int i=0;i<b;i++){
        sum+=arr[i]*arr[i];
    }
    cout<<sum;
    return 0;
}