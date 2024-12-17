#include <iostream>
using namespace std;
#define ARRMAX 1000
#define V_T 1000
void Distance(int arr[],int v,int t,int &arr_pnt){
    for(int i=0;i<t;i++){  
        arr[arr_pnt++]=arr[arr_pnt-1]+v;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    int a_pnt=1;
    int b_pnt=1;
    int A[ARRMAX*V_T]={0};
    int B[ARRMAX*V_T]={0};

    for(int i=0;i<n;i++){
        int v,t;
        cin>>v>>t;
        Distance(A,v,t,a_pnt);
    }
    for(int i=0;i<m;i++){
        int v,t;
        cin>>v>>t;
        Distance(B,v,t,b_pnt);
    }
    int cnt=0;
    char curIdx=' ';
    for(int i=1;i<a_pnt-1;i++){
        if(A[i]>B[i]){
            if(curIdx==' ')curIdx='A';
            if(curIdx!='A'){
                cnt++;
                curIdx='A';
            }


        }else if(A[i]<B[i]){
            if(curIdx==' ')curIdx='B';
            if(curIdx!='B'){
                cnt++;
                curIdx='B';
            }

        }

    }
    cout<<cnt;
    return 0;
}