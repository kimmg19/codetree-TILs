#include <iostream>
using namespace std;


int Fnc_Even(int n){
    if(n==0)return 0;
    return n+Fnc_Even(n-2);
}
int Fnc_Odd(int n){
    if(n==1)return 1;
    return n+Fnc_Odd(n-2);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    if(n%2==0)cout<<Fnc_Even(n);
    else cout<<Fnc_Odd(n);
    return 0;
}