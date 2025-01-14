#include <iostream>
using namespace std;
#define MAX 1000000


void Move(int arr[],int v, int t,int &point){
    for(int i=0;i<t;i++){
        arr[point+1]=arr[point]+v;
        point++;
    }
}

int main() {
    // Please write your code here.
    int n,m,nPoint=0,mPoint=0;
    int nArr[MAX]={};
    int mArr[MAX]={};
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int v,t;
        cin>>v>>t;
        Move(nArr,v,t,nPoint);
    }
    for(int i=0;i<m;i++){
        int v,t;
        cin>>v>>t;
        Move(mArr,v,t,mPoint);

    }
    int cnt=0;
    char currentCrown='N';
    char nextCrown='N';
    for(int i=1;i<nPoint;i++){
        if(nArr[i]>mArr[i]){
            nextCrown='A';
        }else if(nArr[i]<mArr[i]){
            nextCrown='B';
        }else{
            nextCrown='C';  
        }
        
        if(currentCrown!=nextCrown){
            // cout<<currentCrown<<" "<<nextCrown<<endl;
            currentCrown=nextCrown;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}