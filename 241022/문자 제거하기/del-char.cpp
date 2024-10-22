#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int n;

    cin>>str;
    while(true){
        cin>>n;
        if(n>=str.length()){
            str.erase(str.length()-1,1);
            
        }
        else{
            str.erase(n,1);
            
        } 
        cout<<str<<endl;
        if(str.length()==1)break;
    }
    return 0;
}