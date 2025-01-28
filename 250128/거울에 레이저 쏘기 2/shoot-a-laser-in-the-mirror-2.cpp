#include <iostream>
using namespace std;
#define MAX 1000


char mirrorRoom[MAX][MAX]={};
int n;
int x,y;
int dir_num;

int Direction(int k){
    return k/n;
}

void EnterPoint(int dir_num,int k){
    if(dir_num==0){
        x=0;
        y=k%n;
    }else if(dir_num==1){
        x=k%n;
        y=n-1;
    }else if(dir_num==2){
        x=n-1;
        if(n%2==1)
            y=n-((k+1)/n);
        else
            y=n-((k+1)%n);

    }else{
        x=n-((k+1)%n);
        y=0;
    }
}
bool OutofRange(int x,int y){
    return x<0 || y<0 || x>=n || y>=n;
}
int main() {
    // Please write your code here.
    int k;    
    int dx[4]={1,0,-1,0};
    int dy[4]={0,-1,0,1};

    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char r;
            cin>>r;
            mirrorRoom[i][j]=r;
        }
    }
    cin>>k;
    dir_num=Direction(k-1);
    EnterPoint(dir_num,k-1);
   
    int cnt=0;
    while(true){
        
        cnt++;
        if(dir_num%2==0){
            if(mirrorRoom[x][y]=='/'){
                dir_num=(dir_num+1)%4;
            }else if(mirrorRoom[x][y]=='\\'){
                dir_num=(dir_num+3)%4;
            }
        }else{
            if(mirrorRoom[x][y]=='/'){
                dir_num=(dir_num+3)%4;
            }else if(mirrorRoom[x][y]=='\\'){
                dir_num=(dir_num+1)%4;
            }
        }
        
        int nx=x+dx[dir_num];
        int ny=y+dy[dir_num];
        
        if(OutofRange(nx,ny)){
            break;
        }else{
            x=x+dx[dir_num];
            y=y+dy[dir_num];
            
        }

    }
    cout<<cnt;
    return 0;
}