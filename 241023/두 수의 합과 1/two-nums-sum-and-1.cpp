#include <iostream>
#include <string>

using namespace std;

int main() {
    int a,b,cnt=0;
    cin>>a>>b;
    string str=to_string(a+b);

    for(int i=0;i<str.size();i++){
        if(str[i]=='1')cnt++;
    }
    cout<<cnt;
    return 0;
}