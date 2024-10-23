#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if('A'<=str[i]&&str[i]<='Z')cout<<(char)tolower(str[i]);
        else cout<<(char)toupper(str[i]);
    }
    return 0;
}