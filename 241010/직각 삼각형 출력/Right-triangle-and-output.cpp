#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}