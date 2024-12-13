#include <iostream>
using namespace std;
#define OFFSET 1000

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[2000][2000]={};
    int pnt=2;
    int cnt=0;
    for(int i=0;i<3;i++){
        
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        x1+=OFFSET;
        x2+=OFFSET;
        y1+=OFFSET;
        y2+=OFFSET;

        for(int j=x1;j<x2;j++){
            for(int k=y1;k<y2;k++){
                arr[j][k]=pnt;
            }
        }
        pnt--;
    }
    for(int i=0;i<2000;i++){
        for(int j=0;j<2000;j++){
            if(arr[i][j]==2 || arr[i][j]==1)cnt++;
        }
    }
    cout<<cnt;
    return 0;
}