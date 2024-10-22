#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin>>str;
    char chr=str[1];
    for(int i=0;i<str.length();i++){
        if(str[i]==chr)str[i]=str[0];
    }
    cout<<str;
    return 0;
}