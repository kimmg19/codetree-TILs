#include <iostream>
using namespace std;

int main() {
    char a,b;
    cin>>a>>b;
    cout<<a+b<<" ";
    if(a>b)cout<<a-b;
    else cout<<b-a;
    return 0;
}