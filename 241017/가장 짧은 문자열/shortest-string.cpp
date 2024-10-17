#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    int size1=str1.length();
    int size2=str2.length();
    int size3=str3.length();

    if(size1>=size2){
        if(size1>=size3){
            if(size2>=size3)cout<<size1-size2;
            else cout<<size1-size2;
        }else cout<<size3-size2;

        
    }else{
        if(size2>=size3){
            if(size1>=size3)cout<<size2-size3;
            else cout<<size2-size1;
        }else cout<<size3-size1;
    }
    return 0;
}