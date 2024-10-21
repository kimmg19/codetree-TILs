#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    char s;
    cin>>str>>s;
    if(str.find(s)==string::npos)cout<<"No";
    else cout<<str.find(s);
    return 0;
}