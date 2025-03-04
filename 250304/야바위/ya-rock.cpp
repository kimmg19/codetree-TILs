#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 종이컵 3개,  a와 b 를 교환, 
    int n;
    cin>>n;
    int a[100]={};
    int b[100]={};
    int c[100]={};
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    int maxcnt=0;
    for(int i=0;i<3;i++){//조약돌을 넣는 위치 1~3
        int point[3]={};
        point[i]=1;
        int cnt=0;
        for(int j=0;j<n;j++){            
            int acup=point[a[j]-1];            
            point[a[j]-1]=point[b[j]-1];
            point[b[j]-1]=acup;
            if(point[c[j]-1]==1){
                cnt++;
            }
        }
        maxcnt=max(cnt,maxcnt);
    }
    cout<<maxcnt;
    return 0;
}