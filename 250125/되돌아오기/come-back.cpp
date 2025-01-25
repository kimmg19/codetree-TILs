#include <iostream>
using namespace std;

int Direction(char dir){
    if(dir=='E'){
        return 0;
    }else if(dir=='S'){
        return 1;
    }else if(dir=='W'){
        return 2;
    }else{
        return 3;
    }
}

int main() {
    // Please write your code here.
    int x=0,y=0;
    int dx[4]={1,0,-1,0};
    int dy[4]={0,-1,0,1};
    int n;
    int dir_num;
    int time=0;
    cin>>n;
    for(int i=0;i<n;i++){
        char dir;
        int distance;
        cin>>dir>>distance;
        dir_num=Direction(dir);
        for(int j=1;j<=distance;j++){
            x=x+dx[dir_num];
            y=y+dy[dir_num];
           
            time++;
            if(x==0 && y==0){
                cout<<time;
                return 0;
            }            
        }
    }
    cout<<-1;

    return 0;
}