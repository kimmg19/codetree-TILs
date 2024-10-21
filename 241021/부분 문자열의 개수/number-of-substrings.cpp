#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1,str2;
    int cnt=0;
    cin>>str1,str2;
    int length=str1.length();
    int length2=str2.length();
    for(int i=0;i<length-length2;i++){
        if(str1.substr(i,length2)==str2)cnt++;
    }
    cout<<cnt;
    return 0;
}