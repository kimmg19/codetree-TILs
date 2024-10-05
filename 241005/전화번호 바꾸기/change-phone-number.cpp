#include <iostream>
using namespace std;

int main() {
    char phoneNum[14];
    char switchNum;
    
    cin>>phoneNum;
    for(int i=0;i<4;i++){
        switchNum=phoneNum[i+4];
        phoneNum[i+4]=phoneNum[i+9];
        phoneNum[i+9]=switchNum;
    }
    cout<<phoneNum;
    return 0;
}