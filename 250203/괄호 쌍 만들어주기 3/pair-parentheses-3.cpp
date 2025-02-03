#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin>>str;
    int cnt=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='('){
            for(int j=i;j<str.length();j++){
                if(str[j]==')')cnt++;
            }

        }
    }
    cout<<cnt;
    return 0;
}