#include <iostream>
using namespace std;

#define OFFSET 1000
#define MAX 2000
#define N 2
int main() {
    // 여기에 코드를 작성해주세요.
    int x1[N],x2[N],y1[N],y2[N];
    int arr[MAX][MAX]={};

    for(int i=0;i<N;i++){
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
        x1[i]+=OFFSET;
        x2[i]+=OFFSET;
        y1[i]+=OFFSET;
        y2[i]+=OFFSET;
    }
    for(int i=0;i<N;i++){
        for(int j=x1[i];j<x2[i];j++){
            for(int k=y1[i];k<y2[i];k++){
                
                if(arr[j][k]==1)arr[j][k]=3;
                else arr[j][k]=i+1;
                
            }
        }
    }
    int a1=0,b1=0,a2=0,b2=0;

    for(int i=x1[0];i<=x2[0];i++){
        for(int j=y1[0];j<=y2[0];j++){
            if(arr[i][j]==1 && a1==0 && b1==0){
                a1=i;
                b1=j;
            }
            else if(arr[i][j]==1 || arr[i][j]==3){
                a2=i+1;
                b2=j+1;
            }            
        }
    }
     cout<<(a2-a1)*(b2-b1);
    // cout<<a2<<" "<<a1<<" "<<b2<<" "<<b1;


    return 0;
}