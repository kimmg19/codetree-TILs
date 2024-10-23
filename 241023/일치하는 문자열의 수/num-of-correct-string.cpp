#include <iostream>
using namespace std;

int main() {
    int n,cnt=0;
    string A;
    string B;
    cin>>n>>A;
    for(int i=0;i<n;i++){
        cin>>B;
        if(A==B)cnt++;
    }
    cout<<cnt;
    return 0;
}