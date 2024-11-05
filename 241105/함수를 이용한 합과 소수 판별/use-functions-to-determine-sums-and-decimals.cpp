#include <iostream>
using namespace std;

bool Sosu(int num){
    if(num==1)return false;
    for(int i=2;i<num;i++){
        if(num%i==0) return false;
    }
    return true;
}
bool EvenNum(int num){
    int sum=0;
    int n;
    while(num>0){
        n=num%10;
        sum=n+sum;
        num/=10;
    }
    if(sum%2==0)return true;
    else return false;
}
bool CheckNum(int i){
    if(Sosu(i) && EvenNum(i)) return true;
    else return false;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(CheckNum(i)){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}