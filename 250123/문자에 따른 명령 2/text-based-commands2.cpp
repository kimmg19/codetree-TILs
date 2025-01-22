#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int currentDirNum=0;
    string str;
    cin>>str;
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    int x=0,y=0;
    //현재 방향,수정할 방향,      
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='L'){
            currentDirNum=(currentDirNum+3)%4;
        }else if(str[i]=='R'){
            currentDirNum=(currentDirNum+1)%4;
        }else{
            x=x+dx[currentDirNum];
            y=y+dy[currentDirNum];
        }
    }
    cout<<x<<" "<<y;
    return 0;
}