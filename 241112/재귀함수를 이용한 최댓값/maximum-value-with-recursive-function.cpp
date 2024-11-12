#include <iostream>
using namespace std;

void Fnc(int n,int &num){
    if(n==1)return;
    int m;
    cin>>m;
    if(m>=num)num=m;
    
    Fnc(n-1,num);
    
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int num;
    cin>>n;
    cin>>num;
    Fnc(n,num);
    cout<<num;
    return 0;
}