#include <iostream>
using namespace std;

int num;
int Fnc(int n){
    num++;
    if(n==1)return num;
    if(n%2==0)Fnc(n/2);
    else Fnc(3*n+1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    cout<<Fnc(n);
    return 0;
}