#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n,k;
    cin>>n>>k;
    int maxPoint=0;
    char hihi[10000];
    for(int i=0;i<n;i++){
        int num;
        char chr;
        cin>>num>>chr;
        hihi[num]=chr;
        maxPoint=max(maxPoint,num);
    }
    cout<<maxPoint<<endl;
    int maxSum=0;
    for(int i=0;i<maxPoint-k;i++){
        int sum=0;
        for(int j=i;j<=i+k;j++){
            if(hihi[j]=='G'){
                
                sum+=1;
            }else if(hihi[j]=='H'){
                
                sum+=2;
            }
        }
        
        maxSum=max(sum,maxSum);
    }
    cout<<maxSum;
    return 0;
}