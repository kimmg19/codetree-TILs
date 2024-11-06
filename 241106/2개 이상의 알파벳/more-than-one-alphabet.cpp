#include <iostream>
#include <string>
using namespace std;

bool AlphaNum(string &str){
    char chr=str[0];
    for(int i=1;i<str.length();i++){
        if(chr!=str[i]) return true;
    }
    return false;
}
int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin>>str;
    if((AlphaNum(str))){
        cout<<"Yes";
    }else cout<<"No";
    return 0;
}