#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a,b,c;
    int aa,bb,cc;    
        cin>>a>>b>>c;
        cin>>aa>>bb>>cc;
        int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                if(((abs(i-a)<=2)||(abs(a-i)>=n-2)) && ((abs(j-b)<=2)||(abs(j-b)>=n-2))&& ((abs(k-c)<=2)||(abs(k-c)>=n-2))
                ||((abs(i-aa)<=2)||(abs(aa-i)>=n-2)) && ((abs(j-bb)<=2)||(abs(j-bb)>=n-2))&&((abs(k-cc)<=2)||(abs(k-cc)>=n-2)))
                {
                    
                    cnt++;
                }
                    
            }
        }
    }
    cout<<cnt;
    return 0;
}