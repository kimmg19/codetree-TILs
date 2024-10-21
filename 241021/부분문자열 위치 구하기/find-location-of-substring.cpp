#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    string str2;
    cin>>str>>str2;
    if(str.find(str2)!=std::npos)cout<<str.find(str2);
    else cout<<-1;
    return 0;
}