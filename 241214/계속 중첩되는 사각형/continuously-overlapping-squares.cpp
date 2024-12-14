#include <iostream>
using namespace std;

#define OFFSET 100
#define MAX 10

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[200][200]={};
    int n;
    int cnt=0;
    int x1[MAX];
    int y1[MAX];
    int x2[MAX];
    int y2[MAX];

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
        x1[i]+=OFFSET;
        y1[i]+=OFFSET;
        x2[i]+=OFFSET;
        y2[i]+=OFFSET;

    }
    for(int i=0;i<n;i++){
        for(int j=x1[i];j<x2[i];j++){
            for(int k=y1[i];k<y2[i];k++){
                arr[j][k]=(i+1)%2+1;
            }
        }
    }
    for(int i=0;i<200;i++){
        for(int j=0;j<200;j++){
            if(arr[i][j]==1)cnt++;
        }
    }
    cout<<cnt;
    return 0;
}