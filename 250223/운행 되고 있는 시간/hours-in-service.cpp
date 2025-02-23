#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int a[100]={},b[100]={};
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
        int ans=0;

        for(int i=0;i<n;i++){
            int count[1000]={};
            for(int j=0;j<n;j++){
                if(i==j)continue;
                for(int k=a[j];k<b[j];k++){
                    count[k]++;
                }                
            }
            int cnt=0;
            for(int i=0;i<1000;i++){
                if(count[i])cnt++;
            }
            ans=max(ans,cnt);
        }
    
    
    cout<<ans;
    return 0;
}