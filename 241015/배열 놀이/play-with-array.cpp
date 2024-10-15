#include <iostream>
using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
    int arr[n];
    int num;
    int question[2]={};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<q;j++){
        cin>>num;
        if(num==1){
            cin>>question[0];
            cout<<arr[question[0]-1]<<" ";
            cout<<"\n";
            continue;
        }else if(num==2){
            cin>>question[0];  
            for(int k=0;k<n;k++){
                if(arr[k]==question[0]){
                    cout<<k+1<<" ";
                    break;
                }
                continue;
            }
            cout<<"0";
            cout<<"\n";
            continue;
        }else{
            cin>>question[0];
            cin>>question[1];
            for(int i=question[0];i<=question[1];i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
            continue;
        }


    }

    
    return 0;
}