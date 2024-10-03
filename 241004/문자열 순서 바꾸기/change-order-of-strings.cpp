#include <iostream>
using namespace std;

int main() {
    string s,t;
    string any;
    cin>>s>>t;
    any=s;
    s=t;
    t=any;
    cout<<s<<"\n"<<t;
    return 0;
}