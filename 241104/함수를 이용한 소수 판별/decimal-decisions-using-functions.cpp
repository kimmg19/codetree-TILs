#include <iostream>
using namespace std;

bool Is_Prime(int num){
    if(num==1)return false;
    for(int i=2;i<num;i++){
        if(num%i==0){            
            return false;
        }        
    }
    return true;
}
int PrimeRange(int a,int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        if(Is_Prime(i))sum+=i;        
    }
    return sum;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    cout<<PrimeRange(a,b);
    return 0;
}