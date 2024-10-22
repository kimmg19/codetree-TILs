#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin>>str;
    str.erase(1,1);
    str.erase(str.length()-2, 1);
    cout<<str;
    return 0;
}