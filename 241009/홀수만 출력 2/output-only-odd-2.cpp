#include <iostream>
using namespace std;

int main() {
    int b,a;
    cin>>b>>a;
    for(int i=b;b>=a;i--){
        if(i%2==1)cout<<i<<" ";
    }
    return 0;
}