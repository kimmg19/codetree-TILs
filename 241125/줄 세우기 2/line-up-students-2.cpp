#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;

#define MAX 1000

int main() {
    // 여기에 코드를 작성해주세요.
    tuple<int,int,int> students[MAX];

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int h,w;
        cin>>h>>w;
        students[i]=make_tuple(h,w,i+1);
    }
    sort(students,students+n);

    for(int i=0;i<n;i++){
        int height,weight,index;
        tie(height,weight,index)=students[i];
        cout<<height<<" "<<weight<<" "<<index<<endl;
    }
    return 0;
}