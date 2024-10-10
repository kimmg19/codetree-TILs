#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++)cout<<" ";                  
        for(int k=0;k<i;k++)cout<<"* ";
        cout<<"\n";                 
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)cout<<" ";
        for(int k=i;k<=n;k++)cout<<"* ";
        cout<<"\n";
    }
    return 0;
}