#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin>>str;
    int l=str.length();
    for(int i=0;i<=l;i++){
        cout<<str<<"\n";
        str=str.substr(l-1,1)+str.substr(0,l-1);
        
    }
    return 0;
}