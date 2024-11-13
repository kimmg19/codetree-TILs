#include <iostream>
using namespace std;

int arr[10];
int n;

int Fnc(int num,int n){          

    if(n<0)return num;
    int val=num;
    while(true){
        if(val%arr[n]==0 && val%num==0){            
            return Fnc(val,n-1);
        }
        val++;
    }    
}

int main() {
    // 여기에 코드를 작성해주세요.    
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Fnc(arr[n-1],n-1);
    return 0;
}