#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    string B;
    int n=0;
    cin>>A>>B;
    while(true){
        A=A.substr(1,A.length()-1)+A.substr(0,1);
        n++;
        if(A==B){cout<<n;return 0;}
    }
    return 0;
}