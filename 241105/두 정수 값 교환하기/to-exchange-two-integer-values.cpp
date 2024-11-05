#include <iostream>
using namespace std;

void ChangeNum(int*a,int*b){
    int num;
    num=*a;
    *a=*b;
    *b=num;

}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    ChangeNum(&n,&m);
    cout<<n<<" "<<m;
    return 0;
}