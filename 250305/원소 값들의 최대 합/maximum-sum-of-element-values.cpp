#include <iostream>

using namespace std;

int n, m;
int arr[100];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int maxsum=0;
    for(int i=1;i<=n;i++){//시작위치
        int sum=0;
        int pnt=i;
        for(int j=0;j<m;j++){//반복횟수
            sum+=arr[pnt];
            pnt=arr[pnt];
        }
        maxsum=max(sum,maxsum);
    }
    cout<<maxsum;

    return 0;
}