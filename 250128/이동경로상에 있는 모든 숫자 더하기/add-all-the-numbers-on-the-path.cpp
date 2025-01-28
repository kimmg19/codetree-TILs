#include <iostream>
#include <string>
using namespace std;
#define MAX 99
int n;
bool IsRange(int x,int y){
    return x>=0 && y>=0 && x<n && y<n;
}
int main() {
    // Please write your code here.
    int arr[MAX][MAX]={};
    int t;
    int dx[4]={-1,0,1,0};
    int dy[4]={0,-1,0,1};
    int dir=0;
    string str;
    cin>>n>>t;
    int x,y;
    x=n/2;
    y=n/2;
    
    for(int i=0;i<t;i++){
        char chr;
        cin>>chr;
        str+=chr;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int sum=arr[x][y];
    for(int i=0;i<str.length();i++){
        if(str[i]=='L'){
            dir=(dir+1)%4;
        }else if(str[i]=='R'){
            dir=(dir+3)%4;
        }else{
            int nx=x+dx[dir];
            int ny=y+dy[dir];
            if(!IsRange(nx,ny))continue;        
            x=x+dx[dir];
            y=y+dy[dir];
            sum+=arr[x][y];

        }
    }
    
    cout<<sum;
    
    return 0;
}