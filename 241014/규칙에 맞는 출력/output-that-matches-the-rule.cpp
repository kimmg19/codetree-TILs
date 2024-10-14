#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            cout<<N-i+j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}