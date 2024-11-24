#include <iostream>
#include<tuple>
#include <algorithm>

using namespace std;
#define MAX 1000
int main() {
    int n;
    cin>>n;
    tuple<int,int,int> s[MAX];
    for(int i=0;i<n;i++){
        int h,w;
        cin>>h>>w;
        s[i]=make_tuple(-h,-w,i+1);
    }
    sort(s,s+n);
    for(int i=0;i<n;i++){
        int h,w,j;
        tie(h,w,j)=s[i];
        cout<<-h<<" "<<-w<<" "<<j<<endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}