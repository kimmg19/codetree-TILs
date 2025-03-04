#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int arr[100]={};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mincnt=INT_MAX;
    for(int i=0;i<n;i++){//2배하는 수
        arr[i]*=2;
        int remain[100]={};   
        int num=0;     
            for(int j=0;j<n;j++){  //제외할 수
                for(int k=0;k<n;k++){//2배와 제외한 수를 뺴고 문제 실행.
                    if(j==k)continue;
                    remain[num++]=arr[k];
                }     
                int sum=0;

                for(int h=0;h<n-2;h++){
                    // cout<<"h: "<<remain[h]<<"h+1: "<<remain[h+1]<<endl;
                    sum+=abs(remain[h]-remain[h+1]);
            }      
            // cout<<"=="<<endl;
            mincnt=min(sum,mincnt);   
            }        
        arr[i]/=2;
    }
    cout<<mincnt;
    return 0;
}