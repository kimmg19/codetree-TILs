#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin>>str;
    bool isFind=false;
    if(str.find("ee")!=string::npos)cout<<"Yes"<<" ";
    else cout<<"No"<<" ";
    for(int i=0;i<str.length()-1;i++){
        if(str.substr(i,2)=="ab"){
            isFind=true;
            break;
        }       
    }
    if(isFind==true)cout<<"Yes";
    else cout<<"No";
    return 0;
}