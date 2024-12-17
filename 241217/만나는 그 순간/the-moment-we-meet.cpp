#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000
#define OFFSET 1000

void Move(int arr[],char d,int t,int &arr_pnt){
    for(int i=0;i<t;i++){
        if(arr_pnt==0)arr[arr_pnt++]=0;
        if(d=='R'){
            arr[arr_pnt++]=arr[arr_pnt-1]+1;
        }else if(d=='L'){
            arr[arr_pnt++]=arr[arr_pnt-1]-1;
        }else{
            cout<<"error";
            return;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a_pnt=0;
    int b_pnt=0;

    int n,m;
    int A[MAX * OFFSET*2]={};
    int B[MAX * OFFSET*2]={};

    cin>>n>>m;
    for(int i=0;i<n;i++){
        char d;
        int t;
        cin>>d>>t;
        Move(A,d,t,a_pnt);
    }
    for(int i=0;i<m;i++){
        char d;
        int t;
        cin>>d>>t;
        Move(B,d,t,b_pnt);
    }
    // for(int i=0;i<20;i++){
    //     cout<<A[i]<<" "<<B[i]<<endl;    }
    int cnt=max(a_pnt,b_pnt);
    bool isExist;
    for(int i=1;i<cnt;i++){
        if(isExist)return 0;
        if(A[i]==B[i]){
            cout<<i;
            isExist=true;
        }
    }
    cout<<-1;
    return 0;
}