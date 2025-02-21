#include <iostream>
#include<algorithm>
using namespace std;
    int arr[100][2];

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    //[0][0]에 x, [0][1]에 y.
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    int rectangleArea=40000*40000;
    for(int i=0;i<n;i++){
        int minX=40000, minY=40000;
        int maxX=0, maxY=0;

        for(int j=0;j<n;j++){
            if(i==j)continue;
            int x=arr[j][0], y=arr[j][1];
            //x 최소 y 최대 구해서 넓이 최소인지 구하면 될 듯
            minX=min(x,minX);
            minY=min(y,minY);
            maxX=max(x,maxX);
            maxY=max(y,maxY);            
            // cout<<minX<<maxX<<minY<<maxY<<endl;
        }
        rectangleArea=min((maxX-minX)*(maxY-minY),rectangleArea);
    }
    cout<<rectangleArea;
    return 0;
}