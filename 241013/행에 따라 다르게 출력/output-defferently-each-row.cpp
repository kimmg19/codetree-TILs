#include <iostream>
using namespace std;

int main() {
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){ 
            if(i%2==1)cnt++;   
            if(i%2==0)cnt=cnt+2;        
            cout<<cnt<<" ";                          
        }
        cout<<"\n";
    }
    return 0;
}