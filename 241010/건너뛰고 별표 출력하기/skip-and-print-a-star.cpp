#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n"<<"\n";
    }
    for(int i=n-1;i>0;i--){
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<"\n"<<"\n";
    }
    return 0;
}