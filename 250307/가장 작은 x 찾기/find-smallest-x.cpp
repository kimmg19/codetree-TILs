#include <iostream>
#include<algorithm>
using namespace std;

int n;
int a[10];
int b[10];

bool Check(int x){
    for(int i=0;i<n;i++){
        x*=2;
        if(a[i]>x || x>b[i]){
            return false;
        }
    }
    return true;
}
int main() {
// Please write your code here.
cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int minnum=10000;
    for(int x=1;x<=5000;x++){
        if(Check(x)){
            minnum=min(minnum,x);
        }
        
    }
    cout<<minnum;
    return 0;
}