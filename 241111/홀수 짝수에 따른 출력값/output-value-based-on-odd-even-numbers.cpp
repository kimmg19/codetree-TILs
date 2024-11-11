#include <iostream>
using namespace std;

int Fnc(int n){
    if(n==1)return 1;
    if(n==2)return 2;
    return n+Fnc(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<Fnc(n);
}