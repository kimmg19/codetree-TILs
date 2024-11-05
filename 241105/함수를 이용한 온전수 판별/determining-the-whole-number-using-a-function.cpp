#include <iostream>
using namespace std;

int CheckNumRange(int a,int b){
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(i%2==0)continue;
        if(i%10==5)continue;
        if(i%3==0 && i%9!=0)continue;
        cnt++;
    }
    return cnt;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    
    cin>>a>>b;
    cout<<CheckNumRange(a,b);
    return 0;
}