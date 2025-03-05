#include <iostream>

using namespace std;

int n;
int x[20], y[20];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    int ans=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                bool success=true;
                for(int h=0;h<n;h++){
                    
                    if(x[h]==i || x[h]==j || x[j]==k)
                        continue;
                    success=false;
                }
                if(success)
                    ans = 1;
                for(int h=0;h<n;h++){
                    bool success=true;
                    if(y[h]==i || x[h]==j || x[j]==k)
                        continue;
                    success=false;
                }
                if(success)
                    ans = 1;
                for(int h=0;h<n;h++){
                    bool success=true;
                    if(y[h]==i || y[h]==j || x[j]==k)
                        continue;
                    success=false;
                }
                if(success)
                    ans = 1;
                for(int h=0;h<n;h++){
                    bool success=true;
                    if(y[h]==i || y[h]==j || y[j]==k)
                        continue;
                    success=false;
                }
if(success)
                    ans = 1;


                
            }
        }
    }
    
    cout<<ans;
    return 0;
}