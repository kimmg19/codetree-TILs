#include <iostream>
using namespace std;



bool IsRange(int x,int y,int n){
    return (x>=0 && x<n && y>=0 && y<n);
}
int main() {
    // Please write your code here.
    int n;
    int x[4]={1,0,-1,0};
    int y[4]={0,1,0,-1};
    cin>>n;
    int arr[100][100]={};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int dir=0;dir<4;dir++){        
                int dx=i+x[dir];
                 int dy=j+y[dir];
                if(IsRange(dx,dy,n) && arr[dx][dy]==1){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}