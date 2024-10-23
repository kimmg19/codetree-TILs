#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(isdigit(str[i]))cout<<str[i];
        else if(isalpha(str[i]))cout<<(char)(tolower(str[i]));
        else continue;
    }
    return 0;
}