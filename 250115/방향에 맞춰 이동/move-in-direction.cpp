#include <iostream>
using namespace std;

#define MAX 100


int main() {
    // Please write your code here.
    int n;
    int dx=0,dy=0;
    int x[4]={1,0,-1,0};
    int y[4]={0,1,0,-1};
    cin>>n;
    for(int i=0;i<n;i++){
        int distance;
        char vector;
        int dir;
        cin>>vector>>distance;
        if(vector=='W'){
            dir=2;
        }else if(vector=='S'){
            dir=3;
        }else if(vector=='N'){
            dir=1;
        }else if(vector=='E'){
            dir=0;
        }else continue;
        dx+=x[dir]*distance;
        dy+=y[dir]*distance;
    }
        cout<<dx<<" "<<dy;
    return 0;
}