#include <iostream>
using namespace std;

int n;

bool IsOutOfRange(int x, int y){
    return x<1 || x>n || y <1|| y>n;
}
int Direction(char d){
    if(d=='U'){
        return 0;
    }else if(d=='R'){
        return 1;
    }else if(d=='D'){
        return 2;
    }else{
        return 3;
    }
}
int main() {
    // Please write your code here.
    int t;
    int r,c;
    char d;
    int cur_dir;
    cin>>n>>t;
    cin>>r>>c>>d;

    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};

    cur_dir=Direction(d);
    // cout<<cur_dir<<endl;
    for(int i=1;i<=t;i++){ 
               
        if(IsOutOfRange(r+dx[cur_dir],c+dy[cur_dir])){
            //방향 바꾸기, 1초 기다리기
            cur_dir=(cur_dir+2)%4;
            continue;
        }
        r=r+dx[cur_dir];
        c=c+dy[cur_dir];
        // cout<<i<<" "<<r<<" "<<c<<endl;
        
    }
    
    cout<<r<<" "<<c;
    return 0;
}