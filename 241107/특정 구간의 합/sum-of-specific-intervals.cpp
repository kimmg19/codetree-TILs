#include <iostream>
using namespace std;
#define MAX 100

int arr[MAX];

int AddIndex(int a1,int a2){
    int sum=0;
    for(int i=a1;i<=a2;i++){
        sum+=arr[i-1];
    }
    return sum;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    int a1,a2;
    
    cin>>n>>m;    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>a1>>a2;
        cout<<AddIndex(a1,a2)<<"\n";
    }
    return 0;
}