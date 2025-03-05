#include <iostream>
#include<algorithm>

using namespace std;
int x[100];
    int n;
int y[100];
int fuck(int xp,int yp){
    int n1=0,n2=0,n3=0,n4=0;
    for(int i=0;i<n;i++){
        
            if(x[i]<xp && y[i]<yp){n3++;}
            if(x[i]<xp && y[i]>yp){n1++;}
            if(x[i]>xp && y[i]<yp){n4++;}
            if(x[i]>xp && y[i]>yp){n2++;}
        
    }
    return max(n3,max(n2,max(n1,n4)));
}
int main() {
    // Please write your code here.
    cin>>n;
    int mincnt=1000;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;i+=2){
        for(int j=0;j<n;j+=2){
            mincnt=min(mincnt,fuck(i,j));
        }
    }
    cout<<mincnt;
    return 0;
}