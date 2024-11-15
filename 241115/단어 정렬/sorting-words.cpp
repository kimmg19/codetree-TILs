#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

#define MAX 100
int main() {
    // 여기에 코드를 작성해주세요.
    
    int n;
    cin>>n;
    string strArr[MAX];
    for(int i=0;i<n;i++){
        cin>>strArr[i];
    }
    sort(strArr,strArr+n);
    for(int i=0;i<n;i++){
        cout<<strArr[i]<<endl;
    }
    
    return 0;
}