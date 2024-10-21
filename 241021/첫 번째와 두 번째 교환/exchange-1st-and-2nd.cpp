#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]==str[0])str[i]=str[1];
        if(str[i]==str[1])str[i]=str[0];

    }
    cout<<str;
    return 0;
}