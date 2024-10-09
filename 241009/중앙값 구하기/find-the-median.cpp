#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a>c){
        if(b>a)cout<<a;
        else if(b>c)cout<<b;
        else cout<<c;
            
        
    }else{
        if(b>c)cout<<c;
        else if(a>b)cout<<b;
        else cout<<a;
    }
        
        
    
    return 0;
}