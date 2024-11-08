#include <iostream>
using namespace std;

void HelloWorlld(int n){
    if(n==0){
        return;
    }
    cout<<"HelloWorld"<<endl;
    HelloWorlld(n-1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    HelloWorlld(n);
    return 0;
}