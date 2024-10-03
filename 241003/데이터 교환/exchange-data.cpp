#include <iostream>
using namespace std;

int main() {
    int a=5,b=6,c=7;
    int num;
    num=a;
    a=c;
    c=b;
    b=num;
    cout<<a<<"\n"<<b<<"\n"<<c;
    return 0;
}