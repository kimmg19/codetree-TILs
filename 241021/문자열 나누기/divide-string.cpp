#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
    string str1,str2;
    for(int i=0;i<n;i++){
        cin>>str2;
        str1.append(str2);
    }
    for(int i=1;i<=str1.length();i++){
        cout<<str1[i-1];
        if(i%5==0)cout<<"\n";
    }
    return 0;
}