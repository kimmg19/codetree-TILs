#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){            
                sum+=arr[k];
                if(k==j){
                    float child=(float)sum/(j-i+1);
                    // cout<<i<<" "<<j<<" ";
                    // cout<<child<<" "<<sum<<" "<<j-i+1<<endl;
                    for(int h=i;h<=j;h++){
                        if(arr[h]==child){
                            cnt++;
                            break;
                        }
                    }
                }
            }
            
        }
    }
    cout<<cnt;
    return 0;
}