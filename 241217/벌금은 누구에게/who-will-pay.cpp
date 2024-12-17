#include <iostream>
using namespace std;
#define MAX 100
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,k;
    cin>>n>>m>>k;
    int arr[MAX]={};
    for(int i=0;i<n;i++){
        arr[i]=k;
    }
    for(int i=0;i<m;i++){
        int num;
        cin>>num;
        arr[num-1]--;
        if(arr[num-1]==0){
            cout<<num;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}