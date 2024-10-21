#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string str1,str2="";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str1;
        str2+=str1;
    }
    cout<<str2;
    return 0;
}