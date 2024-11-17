#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define MAX 100
int main() {
    // 여기에 코드를 작성해주세요.
    string strArr[MAX];
    string str;
    int n,k,num=0;
    cin>>n>>k;
    cin>>str;
    for(int i=0;i<n;i++){
        string sss;
        cin>>sss;
        if(sss.substr(0,str.length())==str){    
           

            strArr[num++]=sss;
            
        }
        
    }
    
    sort(strArr,strArr+num);
    cout<<strArr[k-1];
    return 0;
}