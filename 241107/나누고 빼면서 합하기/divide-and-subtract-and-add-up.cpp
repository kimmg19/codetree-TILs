#include <iostream>
using namespace std;
#define MAX 50

int sum=0;
void DMP(int *arr,int m){
   while(m!=0){
    if(m%2==0){
        sum+=arr[m-1];
        m/=2;
    }else{
        sum+=arr[m-1];
        m-=1;
    }
    }
    return;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    
    int arr[MAX];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    DMP(arr,m);
    cout<<sum;
    return 0;
}