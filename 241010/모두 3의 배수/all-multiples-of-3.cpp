#include <iostream>
using namespace std;

int main() {
    int a;
    for(int i=0;i<5;i++){
        cin>>a;
        if(a%3==0){
            continue;
        }
        else{
            cout<<"0";
            return 0;
        }
    }
    cout<<"1";
    return 0;
}