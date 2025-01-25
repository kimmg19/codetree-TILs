#include <iostream>
using namespace std;
#define MAX 100

int n;

bool IsRange(int x,int y){
    return x>=0 && x<n && y>=0 && y<n;
}

int main() {
    // Please write your code here.
    int m;
    int arr[MAX][MAX]={};
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int r,c;
        int cnt=0;
        cin>>r>>c;
        arr[r-1][c-1]=1;
        for(int j=0;j<4;j++){
                int nx=r+dx[j]-1;
                int ny=c+dy[j]-1;
                if (IsRange(nx,ny) && arr[nx][ny]!=0){
                cnt++;
            }
        }
        if(cnt==3){
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
    }
    return 0;
}