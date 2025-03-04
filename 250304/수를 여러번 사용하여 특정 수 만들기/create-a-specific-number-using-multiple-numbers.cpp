#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;
    int maxnum=0;
    for(int i=0;i<1000;i++){
        int num=0;
        for(int j=0;j<1000;j++){
            if(i*a+j*b<=c){
                num=i*a+j*b;
            }
        if(maxnum<=c)
        maxnum=max(maxnum,num);
        }
        
    }
    cout<<maxnum;
    return 0;
}