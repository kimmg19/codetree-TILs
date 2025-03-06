#include <iostream>
#include<climits>
#include <algorithm>
using namespace std;

char seat[20];
int n;

int Plus(int i){
    int num=0;
    if(num==0 && i+num==n-1)return INT_MAX;
    while(i+num<n){
              
        if(seat[i+num]=='1'){
            break;
        }
        num++;
    }
    return num;
}
int Minus(int i){
    int num=0;
    if(num==0 && i-num==0)return INT_MAX;
    while(i-num>=0){        
        if(seat[i-num]=='1'){
            break;
        }
        num++;
    }
    return abs(num);
}

int main() {
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>seat[i];
    }
int maxdis=0;
    for(int i=0;i<n;i++){    
        int mindis=1000;    
        if(seat[i]=='0'){            
            // cout<<Plus(i)<<" "<<Minus(i)<<endl;
            mindis=min(Plus(i),Minus(i));
            maxdis=max(maxdis,mindis);            
        }
    }
    cout<<maxdis;
    return 0;
}