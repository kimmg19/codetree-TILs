#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n,c,g,h;
    cin>>n>>c>>g>>h;
    int x[1000]={};
    int y[1000]={};
    int maxy=0;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
        maxy=max(y[i],maxy);
    }
    int maxsum=0;
    for(int i=0;i<=maxy;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(i<x[j])sum+=c;
            else if(i>=x[j]&&i<=y[j])sum+=g;
            else sum+=h;
        }
        maxsum=max(sum,maxsum);
    }
    cout<<maxsum;
    return 0;
}