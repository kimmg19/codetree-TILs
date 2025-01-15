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
        cin>>vector>>distance;
        if(vector=='W'){
            dx+=x[2]*distance;
            dy+=y[2]*distance;
        }else if(vector=='S'){
            dx+=x[3]*distance;
            dy+=y[3]*distance;
        }else if(vector=='N'){
            dx+=x[1]*distance;
            dy+=y[1]*distance;
        }else if(vector=='E'){
            dx+=x[0]*distance;
            dy+=y[0]*distance;
        }else continue;
    }
        cout<<dx<<" "<<dy;
    return 0;
}