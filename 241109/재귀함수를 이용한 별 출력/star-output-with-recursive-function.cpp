#include <iostream>
using namespace std;

void FncStar(int n){
    if(n<1){
        return;
    }

    FncStar(n-1);
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;
    return;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    FncStar(n);
    return 0;
}