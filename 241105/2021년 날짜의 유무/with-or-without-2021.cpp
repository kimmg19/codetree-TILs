#include <iostream>
using namespace std;

bool MonthDay(int n,int m){
    
    if(n<=12 && n%2==0){
        if(n==2){
            if(m<=28)return true;
            else return false;
        }else{
            if(m<=31)return true;
            else return false;
        }
    }else if(n<=12 && n%2==1){
        if(m<=30) return true;
        else return false;
    }else return false;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int M,D;
    cin>>M>>D;
    if(MonthDay(M,D)){
        cout<<"Yes";
    }else cout<<"No";
    return 0;
}