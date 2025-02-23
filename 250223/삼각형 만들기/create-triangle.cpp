#include <iostream>
#include<algorithm>
using namespace std;
int x[100]={};
int y[100]={};

bool CheckPoint(int i,int j,int k){
    // if(i==j || j==k || i==k)return false;
    if(x[i]==x[j]&&x[j]==x[k] || y[i]==y[j]&&y[j]==y[k])return false;
    if((x[i] == x[j] || x[i] == x[k] || x[j] == x[k]) &&
                   (y[i] == y[j] || y[i] == y[k] || y[j] == y[k]))return true;
    else return false;   
}
int CalArea(int i,int j,int k){
    int xx=max(max(x[i],x[k]),x[j]);
    int yy=max(max(y[i],y[k]),y[j]);
    int xxx=min(min(x[i],x[k]),x[j]);
    int yyy=min(min(y[i],y[k]),y[j]);
    return (xx-xxx)*(yy-yyy);
}
int main() {
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>x[i];
        cin>>y[i];
    }
    int maxArea=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){                
                if(!CheckPoint(i,j,k))continue;
                int area=CalArea(i,j,k);
                maxArea=max(area,maxArea);
            }
        }
    }
    cout<<maxArea;
return 0;
}