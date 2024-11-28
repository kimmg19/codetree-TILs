#include <iostream>
#include <algorithm>
using namespace std;



int arr[100]={};

void ChargeBlock(int a,int b){
    for(int i=a;i<=b;i++){
        arr[i]++;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        int a,b;
        cin>>a>>b;
        ChargeBlock(a,b);
    }
    int max=*max_element(arr,arr+100);
    cout<<max;
    return 0;
}
