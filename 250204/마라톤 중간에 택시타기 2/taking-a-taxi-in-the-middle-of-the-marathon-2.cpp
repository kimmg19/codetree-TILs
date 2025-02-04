#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int checkPointX[100]={};
    int checkPointY[100]={};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>checkPointX[i];
        cin>>checkPointY[i];
    }

    int minDis=INT_MAX;
    for(int i=1;i<n-1;i++){
        int totalDistance=0;
        int prev=0;
        for(int j=1;j<n;j++){
            if(j==i)continue;
            totalDistance+=abs(checkPointX[prev]-checkPointX[j])+abs(checkPointY[prev]-checkPointY[j]);
            prev=j;
        }
        
        minDis=min(totalDistance,minDis);
    }
    cout<<minDis;
    return 0;
}