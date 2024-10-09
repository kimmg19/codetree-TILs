#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a>c){
        if(b>a)cout<<a;
        else{
            if(b>c)cout<<b;
            else cout<<c;
        }
    }else{
        if(a>b)cout<<b;
        else{
            if(a>c)cout<<a;
            else cout<<c;
        }
    }
    return 0;
}