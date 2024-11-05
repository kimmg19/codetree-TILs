#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void Palin(string &str){
    string str2=str;
    reverse(str.begin(),str.end());

    if(str==str2)cout<<"Yes";
    else cout<<"No";
}
int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin>>str;
    Palin(str);
    return 0;
}