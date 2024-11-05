#include <iostream>
using namespace std;

bool Continuous(int arr1[],int arr2[],int n1,int n2){
    bool isConti=false;
    for(int i=0;i<=n1-n2;i++){
        
        if(arr1[i]==arr2[0]){
            for(int j=0;j<n2;j++){
                if(arr1[i+j]==arr2[j]){
                    isConti=true;
                    // cout<<arr1[i+j]<<" "<<arr2[j];
                }
                else isConti=false;
            }
        }
        else continue;
    }
    return isConti;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n1,n2;
    cin>>n1>>n2;
    int A[n1];
    int B[n2];

    for(int i=0;i<n1;i++){
        cin>>A[i];
    }
    for(int i=0;i<n2;i++){
        cin>>B[i];
    }
    if(Continuous(A,B,n1,n2))cout<<"Yes";
    else cout<<"No";
    return 0;
}