#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;

    string str=to_string(n);
    int num=0;
    for(int i=0;i<str.length();i++){
        num=num*2+str[i]-'0';
    }
    cout<<num;
}