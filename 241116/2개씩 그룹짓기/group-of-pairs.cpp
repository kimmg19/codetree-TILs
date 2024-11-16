#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1000
int arr[MAX];
int n; 

int Fnc(int i){
    return arr[i]+arr[n*2-1-i];
}

int main() {
    // 여기에 코드를 작성해주세요.
    int max=0;
       
    cin>>n;
    for(int i=0;i<n*2;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n*2);
    for(int i=0;i<n;i++){
        if(max<=Fnc(i)){
            max=Fnc(i);
        }
        
    }
    cout<<max;
    return 0;
}

