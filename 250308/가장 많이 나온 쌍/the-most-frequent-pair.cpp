#include <iostream>
#include<algorithm>
using namespace std;
    int arr[100][100];

int main() {
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    int maxcnt=0;
    for(int i=0;i<m;i++){
        int x=arr[i][0];
        int y=arr[i][1];
        int cnt=1;
        for(int j=i+1;j<m;j++){
            if((arr[j][0]==x && arr[j][1]==y) || (arr[j][0]==y && arr[j][1]==x)){
                cnt++;
            }
        }
        maxcnt=max(maxcnt,cnt);
    }
    cout<<maxcnt;
    return 0;
}