#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 20
int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int arr[MAX][MAX];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-2;j++){
            cnt= max(cnt,arr[i][j]+arr[i][j+1]+arr[i][j+2]);
        }
    }
    cout<<cnt;
    return 0;
}