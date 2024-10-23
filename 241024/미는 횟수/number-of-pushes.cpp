#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    string B;
    int n=0;
    cin>>A>>B;
    for(int i=0;i<A.length()-1;i++){
        A=A.substr(A.length()-1,1)+A.substr(0,A.length()-1);
        
        n++;
        if(A==B){
            cout<<n;
            return 0;
        }else {
            continue;
        }
        
    }
        cout<<-1;
    
    return 0;
}