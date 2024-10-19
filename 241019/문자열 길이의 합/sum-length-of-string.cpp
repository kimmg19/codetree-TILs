#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,a=0,sum=0;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int i=0;i<n;i++){
        sum+=str[i].length();
        if(str[i][0]=='a')a++;
    }
    cout<<sum<<" "<<a;
    return 0;
}