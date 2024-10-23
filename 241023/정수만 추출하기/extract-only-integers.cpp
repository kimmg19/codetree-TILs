#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1,str2,n_str1="",n_str2="";
    cin>>str1>>str2;
    for(int i=0;i<str1.length();i++){
        if(isdigit(str1[i]))n_str1+=str1[i];
        else break;
    }
    for(int i=0;i<str2.length();i++){
        if(isdigit(str2[i]))n_str2+=str2[i];
        else break;
    }
    cout<<stoi(n_str1)+stoi(n_str2);
    return 0;
}