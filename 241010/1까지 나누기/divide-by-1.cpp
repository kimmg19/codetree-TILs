#include <iostream>
using namespace std;

int main() {
    int n,i=1,cnt=0;
    cin>>n;
    while(n<=1){
        n=n/i;
        i++;
        cnt++;
    }
    cout<<cnt;
    return 0;
}