#include <iostream>
using namespace std;
#define MAX 100

int n;



int main() {
    // Please write your code here.
    int arr[MAX][MAX]={};
    int n;
    cin>>n;
    int dx[4]={0,-1,0,1};
    int dy[4]={1,0,-1,0};
    int x,y;  
    int dir=0;  
    x=n/2;
    y=n/2;
    arr[x][y]=1;
    for(int i=2;i<=n*n;i++){
        int nextDir=(dir+1)%4;
        int nx=x+dx[nextDir];
        int ny=y+dy[nextDir];        
        if(arr[nx][ny]==0){
            if(i!=2)
                dir=(dir+1)%4;
        }
        x=x+dx[dir];
        y=y+dy[dir];
        arr[x][y]=i;
    }
        
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}