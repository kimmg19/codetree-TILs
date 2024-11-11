#include <iostream>
using namespace std;


int Fnc(int n){
    if(n==0)return 0;
    int num=n%10;
    return Fnc(n/10)+(num*num);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    cout<<Fnc(n);
    return 0;
}