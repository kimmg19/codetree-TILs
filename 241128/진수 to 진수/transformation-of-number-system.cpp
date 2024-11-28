#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    string n;
    cin>>a>>b>>n;
    int num=0;
    for(int i=0;i<n.size();i++){
        num=num*a+n[i]-'0';
    }
    int arr[20]={};
    int cnt=0;
    while(true){
        if(num<b){
            arr[cnt++]=num;
            break;
        }
        arr[cnt++]=num%b;
        num/=b;
    }
    for(int i=cnt-1;i>=0;i--){
        cout<<arr[i];
    }
    return 0;
}