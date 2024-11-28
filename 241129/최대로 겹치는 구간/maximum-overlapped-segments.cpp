#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 200


int main() {
    // 여기에 코드를 작성해주세요.
    int arr[MAX]={};

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x1,x2;
        cin>>x1>>x2;
        x1+=100;
        x2+=100;
        for(int j=x1;j<x2;j++){
            arr[j]++;
        }

    }
    
    cout<<*max_element(arr,arr+MAX);
    return 0;
}