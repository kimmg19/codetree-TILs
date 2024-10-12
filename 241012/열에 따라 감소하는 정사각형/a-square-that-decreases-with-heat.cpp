#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num=n;
        for(int j=0;j<n;j++){
            cout<<num-j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}