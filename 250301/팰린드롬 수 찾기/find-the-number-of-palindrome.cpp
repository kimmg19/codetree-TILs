#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int x,y;
    cin>>x>>y;
    int cnt=0;
    for(int i=x;i<=y;i++){
        string str=to_string(i);
        int length=str.length();
        string str1=str.substr(0,length/2);
        string str2;
        if(length%2==0)
            str2=str.substr((length/2));
        else 
            str2=str.substr((length/2)+1);
        reverse(str1.begin(),str1.end());
        if(str1==str2)cnt++;
    }
    cout<<cnt;
    return 0;
}