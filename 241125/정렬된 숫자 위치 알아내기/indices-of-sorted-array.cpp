#include <iostream>
#include <algorithm>

#define MAX 1000
using namespace std;

class N{
    public :
    int num;
    int i;
    N(){};
    N(int num, int i){
        this->num=num;
        this->i=i;
    }
};
bool compare(const N &n1,const N &n2){
    if(n1.num==n2.num)
        return n1.i<n2.i;
    return n1.num<n2.num;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int nnn;
    cin>>nnn;
    N n[MAX];
    for(int i=0;i<nnn;i++){
        int num1;
        cin>>num1;
        n[i]=N(num1,i+1);
    }
    sort(n,n+nnn,compare);
    
    int arr[nnn];
    for(int i=0;i<nnn;i++){
        arr[n[i].i]=i+1;
    }
    for(int i=1;i<=nnn;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}