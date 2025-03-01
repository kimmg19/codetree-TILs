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
        string str1=str;

        reverse(str1.begin(),str1.end());
        if(str==str1)cnt++;
    }
    cout<<cnt;
    return 0;
}