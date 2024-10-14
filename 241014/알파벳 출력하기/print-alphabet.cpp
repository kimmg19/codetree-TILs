#include <iostream>
using namespace std;

int main() {
    int n;
    char cnt='A';
    cin>>n;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<=i;j++){
            cout<<cnt;
            if(cnt=='Z')cnt='A';
            else cnt++;
        }
        cout<<"\n";
    }
    return 0;
}