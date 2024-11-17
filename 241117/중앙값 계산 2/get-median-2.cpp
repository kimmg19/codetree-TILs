#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 100000


int arr[MAX];

bool CheckOdd(int i){
    if(i%2==1)return true;
    else return false; 
}

void PrintCenterValue(int i){
    sort(arr,arr+i);
    cout<<arr[i/2]<<" ";
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,num;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i-1];        
        if(CheckOdd(i)){
            PrintCenterValue(i);
        }
    }
    return 0;
}