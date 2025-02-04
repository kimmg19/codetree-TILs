#include <iostream>
#include <string>
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
    
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[i]=1;
            break;
        }
    }
    int maxNum=0;
    for(int i=0;i<n;i++){
        maxNum=maxNum*2+arr[i];
    }
    cout<<maxNum;
    return 0;
}