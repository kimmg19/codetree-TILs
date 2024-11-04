#include <iostream>
using namespace std;

void DoMultiple(int a,int b){
    int num=1;
    for(int i=0;i<b;i++){
        num=num*a;
        
    }
    cout<<num;
}

int main() {
    int a,b;
    cin>>a>>b;
    DoMultiple(a,b);
    return 0;
}