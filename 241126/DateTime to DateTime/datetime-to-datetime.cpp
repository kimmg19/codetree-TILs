#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin>>a>>b>>c;
    int minuteInput=0;
    
    minuteInput=c + b*60 + a*60*24;
    int currentTime=11 + 11*60 + 11*60*24;
    int timeDif=minuteInput-currentTime;
    if(timeDif<0)cout<<-1;
    else cout<<timeDif;
    return 0;
}