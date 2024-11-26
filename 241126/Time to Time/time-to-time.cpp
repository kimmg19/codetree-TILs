#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int time1=a*60+b;
    int time2=c*60+d;
    int timeDif=time2-time1;
    cout<<timeDif;
    return 0;
}