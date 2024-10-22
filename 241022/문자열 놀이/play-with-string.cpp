#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int q,num;
    int a,b;
    char chr_c;
    char chr_a,chr_b;
    cin>>str>>q;
    for(int i=0;i<q;i++){
        cin>>num;
        if(num==1){
            cin>>a>>b;
            chr_c=str[a-1];
            str[a-1]=str[b-1];
            str[b-1]=chr_c;
        }else{
            cin>>chr_a>>chr_b;
            for(int j=0;j<str.length();j++){
                if(str[j]==chr_a)str[j]=chr_b;
            }
            
        }
            cout<<str<<"\n";

    }
    return 0;
}