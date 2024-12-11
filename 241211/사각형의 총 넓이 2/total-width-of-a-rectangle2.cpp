#include <iostream>
using namespace std;


int arr[200][200]={};
int offset=100;

void Offset(int &x1,int &y1,int &x2,int &y2){
    x1+=offset;
    x2+=offset;
    y1+=offset;
    y2+=offset;

}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt=0;

    cin>>n;
    for(int i=0;i<n;i++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        Offset(x1,y1,x2,y2);
        for(int j=x1;j<x2;j++){
            for(int k=y1;k<y2;k++){
                arr[j][k]=1;
            }
        }
    }
    for(int j=0;j<200;j++){
            for(int k=0;k<200;k++){
                if(arr[j][k]==1)cnt++;
            }
        }
    cout<<cnt;
    return 0;
}