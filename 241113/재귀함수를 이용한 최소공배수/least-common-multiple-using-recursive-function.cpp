#include <iostream>
using namespace std;

int arr[10];
int n;

int Fnc(int num,int val){
    if(val<2)return num;
    while(){
        if(num%arr[val-1]==0 && num%arr[val-2]==0)
            return Fnc(num,val-1);
        num++;
    }
    
}

int main() {
    // 여기에 코드를 작성해주세요.    
    
    cin>>n;
    for(int i=0;i<n;;i++){
        cin>>arr[i];
    }
    cout<<Fnc(arr[n-1],n);
    return 0;
}