#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin>>str;
    char chr0=str[0];
    char chr1=str[1];

    for(int i=0;i<str.length();i++){
        if(str[i]==chr0)str[i]=chr1;
        else if(str[i]==chr1)str[i]=chr0;

    }
    cout<<str;
    return 0;
}