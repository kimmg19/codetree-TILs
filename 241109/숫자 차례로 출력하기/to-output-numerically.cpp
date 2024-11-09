#include <iostream>
using namespace std;

void Fnc1(int n){
    if(n<1)return;
    Fnc1(n-1);
    cout<<n<<" ";
    return;
}

void Fnc2(int n){
    if(n<1)return;
    
    cout<<n<<" ";
    Fnc1(n-1);
    return;
}


int main() {
    // 여기에 코드를 작성해주세요
    int n;
    Fnc1(n);
    Fnc2(n);
    return 0;
}