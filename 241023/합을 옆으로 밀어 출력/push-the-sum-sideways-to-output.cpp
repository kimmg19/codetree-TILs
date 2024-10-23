#include <iostream>
#include <string>

using namespace std;

int main() {
    int n,num,sum=0;
    cin>>n;
    string str;
    for(int i=0;i<n;i++){
        cin>>num;
        sum+=num;
    }
    str=to_string(sum);
    str= str.substr(1,str.length()-1)+str.substr(0,1);
    cout<<str;
    return 0;
}