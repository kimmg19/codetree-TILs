#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1;
    string str2;
    cin>>str1>>str2;
    int str1_leng,str2_leng;
    while(true){
        if(str1.find(str2)!=string::npos){
            str1.erase(str1.find(str2),str2.length());
        }else {cout<<str1;
            break;
        }
    }
    return 0;
}