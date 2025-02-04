#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin>>str;    
    int arr[10]={};
    int n=str.length();
    for(int i=0;i<n;i++){
        arr[i]=str[i]-'0';
    }
    
    int maxNum=0;
    for(int i=0;i<n;i++){
        int num=0;
        arr[i]=abs(arr[i]-1);
        
        for(int j=0;j<n;j++){
            num=num*2+arr[j];
        }
        maxNum=max(maxNum,num);
        arr[i]=abs(arr[i]-1);
    }
    
    
    cout<<maxNum;
    return 0;
}