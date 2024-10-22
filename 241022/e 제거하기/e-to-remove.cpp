#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin>>str;
    for(int i=0;i<str.length()-1;i++){
    if(str.substr(i,1)=="e"){
        str.erase(i,1);
        break;
    }else{

    }
    }
    cout<<str;
    return 0;
}