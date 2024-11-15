#include<algorithm>
#include <iostream>
using namespace std;

#define MAX 100
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int A[MAX];
    int B[MAX];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        cin>>B[i];
    }

    sort(A,A+n);
    sort(B,B+n);
    for(int i=0;i<n;i++){
        if(A[i]!=B[i]){
            cout<<"No";
            return 0;
        }        
    }
    cout<<"Yes";
    return 0;
}