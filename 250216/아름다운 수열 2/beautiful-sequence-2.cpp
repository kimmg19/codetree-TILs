#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arrN[100]={};
    int arrM[100]={};
    for(int i=0;i<n;i++){
        cin>>arrN[i];
    }
    for(int i=0;i<m;i++){
        cin>>arrM[i];
    }
    int cnt=0;
    for(int i=0;i<=n-m;i++){        
        if(is_permutation(arrN+i,arrN+i+m,arrM)){
            cnt++;
        

        }
        
    }
    cout<<cnt;
    return 0;
}