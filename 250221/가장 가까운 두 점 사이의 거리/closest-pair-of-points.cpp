#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int x[100]={};
    int y[100]={};
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    int mindis=10000;
    for(int i=0;i<n;i++){
        int disX,disY;
        for(int j=i+1;j<n;j++){
            disX=abs(x[i]-x[j]);
            disY=abs(y[i]-y[j]);
            mindis=min(disX*disX+disY*disY,mindis);
        }
    }
    cout<<mindis;
        return 0;
}