#include <iostream>
using namespace std;

int main() {
    int a;
    int cnt=0;
    for(int i;i<5;i++){
        cin>>a;
        if(a%2==0)cnt++;
    }
    cout<<cnt;
    return 0;
}