#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        for(int k=0;k<i*2;k++){
            cout<<" ";
        }
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}