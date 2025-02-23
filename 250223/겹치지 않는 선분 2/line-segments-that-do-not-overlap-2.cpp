#include <iostream>
using namespace std;
    int x1[100],x2[100];
int n;
bool IsCross(int i){
    for(int j=0;j<n;j++){
        if(x1[i]>x2[j]&&x2[i<x2[j]])return false;
    }
    return true;

}
int main() {
    // Please write your code here.
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        x1[i]=a;
        x2[i]=b;
    }
    int cnt=0;
    for(int i=0;i<n;i++){//현재 x1과 x2의 값.
        if(IsCross(i))continue;
        else cnt++;
    }
    cout<<cnt;
    return 0;
}