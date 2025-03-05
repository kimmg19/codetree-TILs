#include <iostream>

using namespace std;

int n;
int x[20], y[20];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int h=0;h<n;h++){
                    if(x[h]==i || y[h]==i || x[h]==k)cnt++;
                }
                if(cnt>=n){
                    cout<<1;
                    return 0;
                }
            }
        }
    }
    
    cout<<0;
    return 0;
}