#include <iostream>
using namespace std;


int Fnc(int n){
    if(n==1)return 0; 
    if(n%2==0){
        n/=2;
    }else{
        n/=3;
    }
    return Fnc(n)+1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    cout<<Fnc(n);
    return 0;
}