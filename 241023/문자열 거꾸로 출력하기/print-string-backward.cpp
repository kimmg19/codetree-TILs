#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    while(true){
        cin>>str;
        if(str=="END")return 0;
        else {
            reverse(str.begin(),str.end());
            cout<<str<<"\n";
        }
    }
    return 0;
}