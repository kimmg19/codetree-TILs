#include <iostream>
using namespace std;

int main() {
    int money;
    cin>>money;
    if(money>=3000){
        cout<<"book";
        return 0;
    }else if(money>0){
        cout<<"mask";
    }else if(money==0) cout<<"no";
    return 0;
}