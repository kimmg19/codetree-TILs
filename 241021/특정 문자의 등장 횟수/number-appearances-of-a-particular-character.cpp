#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int ee=0,eb=0;
    string str;
    cin>>str;
    for(int i=0;i<str.length()-1;i++){
        if(str.substr(i,2)=="ee")ee++;
        if(str.substr(i,2)=="eb")eb++;

    }
    cout<<ee<<" "<<eb;
    return 0;
}