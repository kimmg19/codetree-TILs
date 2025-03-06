#include <iostream>
#include <string>

using namespace std;

int n;
string str;

int main() {
    cin >> n;
    cin >> str;
    int length=str.length()-1;//문자열 길이의 절반이 최대.
    // Please write your code here.
    for(int i=length;i>=1;i--){//선택할 문자열 길이 6 5 4 3 2 1...
        string str1="";
        string str2="";
        for(int j=0;j<n-i;j++){//비교할 문자열의 시작 1 2 3...n-i
            str1=str.substr(j,i);
            // cout<<str1<<endl;
            for(int k=j+1;k<=n-i;k++){//두번째 문자열 시작위치
                str2=str.substr(k,i);
                // cout<<str2<<endl;
                if(str1==str2){
                    // cout<<str1<<" "<<str2<<endl;
                    cout<<i+1;
                    return 0;
                }
            }
            
        }
        
    }
    
    cout<<1;
    return 0;
}