#include <iostream>
using namespace std;

void Muntiply(int a,int b){
    cout<<a<<" * "<<b<<" = "<<a*b;
}
void Divide(int a,int b){
    cout<<a<<" / "<<b<<" = "<<a/b;

}
void Plus(int a,int b){
    cout<<a<<" + "<<b<<" = "<<a+b;

}
void Minus(int a,int b){
    cout<<a<<" - "<<b<<" = "<<a-b;

}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    char o;
    cin>>a>>o>>b;
    if(o=='+'){
        Plus(a,b);
    }else if(o=='-'){
        Minus(a,b);
    }else if(o=='*'){
        Muntiply(a,b);
    }else if(o=='/'){
        Divide(a,b);        
    }else cout<<"False";
    return 0;
}