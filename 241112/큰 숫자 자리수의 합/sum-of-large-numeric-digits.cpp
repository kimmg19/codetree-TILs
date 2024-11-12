#include <iostream>
using namespace std;

int Fnc(int num){
    if(num==0)return 0;
    return Fnc(num/10)+num%10;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin>>a>>b>>c;
    int num=a*b*c;
    cout<<Fnc(num);
    return 0;
}