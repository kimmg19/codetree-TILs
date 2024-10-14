#include <iostream>
using namespace std;

int main() {
    int n,num,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>num;
        if(num==2){
            cnt++;
            if(cnt==3)cout<<i;
        }
    }
    return 0;
}