#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int mlt=1;
    for(int i=1;i<=b;i++){
        if(i%2==0)mlt*=i;
    }
    cout<<mlt;
    return 0;
}