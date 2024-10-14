#include <iostream>
using namespace std;

int main() {
    int n,cnt=1;
    
    cin>>n;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            if(i%2==0){
                cout<<cnt<<" ";
                cnt++;
            }
            else{
                cout<<cnt--<<" ";
            }
        }
        if(i%2==0)cnt+=n-1;
        else cnt+=n+1; 
        cout<<"\n";
    }
     return 0;
}