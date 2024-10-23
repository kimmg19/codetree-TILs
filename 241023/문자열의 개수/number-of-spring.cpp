#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    string str_array[200];
    int cnt=0;
    while(true){
        cin>>str;
        if(str=="0"){
            cout<<cnt<<endl;
            for(int i=1;i<=cnt;i++){
                if(i%2==1)cout<<str_array[i-1]<<endl;
                else continue;
            }
            return 0;
        }else{
            str_array[cnt]=str;
            cnt++;
        }
    }
    return 0;
}