#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin>>str;
    string str2;
    cin>>str2;
    
    int num=str.find(str2);
    cout<<num;

    return 0;
}