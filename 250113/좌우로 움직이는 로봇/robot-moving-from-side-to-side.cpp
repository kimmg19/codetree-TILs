#include <iostream>
using namespace std;
#define MAX 50000

int nPoint;//배열 A의 시간
int mPoint;//배열 B의 시간

void MovePoint(int arr[],int t,char d,int &point){    
        if(d=='L')
        {
            for(int i=0;i<t;i++){
                if(point==0)arr[point++]=-1;
                else arr[point++]=arr[point-1]-1;
            }
        }
        else if(d=='R')
        {
            for(int i=0;i<t;i++){
                if(point==0)arr[point++]=1;
                else arr[point++]=arr[point-1]+1;
            }
        }
        else return;        
}

int main() {
    // Please write your code here.
    int cnt=0;
    int A[MAX]={};
    int B[MAX]={};
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int t;
        char d;
        cin>>t>>d;
        MovePoint(A,t,d,nPoint);        
    }    
    for(int i=0;i<m;i++){
        int t;
        char d;
        cin>>t>>d;
        MovePoint(B,t,d,mPoint);        
    }
    if(nPoint>mPoint){
        for(int i=mPoint;i<nPoint;i++){
            B[i]=B[mPoint-1];
        }
    }
    else{
            for(int i=nPoint;i<mPoint;i++){
            A[i]=A[nPoint-1];
        }
    } 
      
    int currentTime=max(nPoint,mPoint);
    for(int i=2;i<currentTime;i++){
        if(A[i]==B[i]){
            if(A[i-1]!=B[i-1])
                cnt++;
        }
    }
    cout<<cnt;
    return 0;
    
}