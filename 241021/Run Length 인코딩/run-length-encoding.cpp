#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;    
    cin>>str;

    string encoded="";
    char chr=str[0];
    int num=1;
    for(int i=1;i<=str.length();i++){
        if(str[i]==chr){
            num++;
        }else{
            encoded+=chr;
            encoded+=(to_string)(num);
            chr=str[i];
            num=1;
        }
    }
    cout<<encoded.length()<<endl<<encoded;
    
    return 0;
}