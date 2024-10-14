#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<i<<" * "<<j-i+1<<" = "<<i*(j-i+1);
            if(j<n)cout<<" / ";
        }
        cout<<"\n";
    }
    return 0;
}