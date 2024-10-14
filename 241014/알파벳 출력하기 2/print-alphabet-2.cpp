#include <iostream>
using namespace std;

int main() {
    int n;
    char cnt='A';
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=0;k<i*2;k++)cout<<" ";
        for(int j=i;j<n;j++){
            cout<<cnt++<<" ";
            if(cnt>'Z')cnt='A';
        }
        cout<<"\n";    }
}