#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str,str2="";
    int num;
    cin>>str>>num;
    int length=str.length();
    int q;
    for(int i=0;i<num;i++){
        cin>>q;
        
        if(q==1){
            str=str.substr(1,length-1)+str.substr(0,1);
            
        }else if(q==2){
            str=str.substr(length-1,1)+str.substr(0,length-1);
            

        }else{
            for(int i=1;i<=length;i++)
                str2+=str.substr(length-i,1)     ;                 
                str=str2;
        }
        str2="";
    cout<<str<<endl; 
    }
    return 0;
}