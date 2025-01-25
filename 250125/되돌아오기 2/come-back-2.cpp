#include <iostream>
#include <string>
using namespace std;



int main() {
    int x=0,y=0;
    int time=0;
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    int dir_num=0;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]=='R'){
            dir_num=(dir_num+1)%4;
        }else if(str[i]=='L'){
            dir_num=(dir_num+3)%4;
        }else{
            x=x+dx[dir_num];
            y=y+dy[dir_num];
        }
        
        time++;
        if(x==0&&y==0){
            cout<<time;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}