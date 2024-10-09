#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<M;i++){
        if((arr[i]%2==1)&&(arr[i]%3==0))cout<<arr[i]<<"\n";
    }
    return 0;
}