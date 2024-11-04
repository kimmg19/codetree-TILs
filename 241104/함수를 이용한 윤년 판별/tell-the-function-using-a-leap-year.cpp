#include <iostream>
using namespace std;
string CheckYear(int year){
    if(year%4==0){
        return "true";
    }
    if(year%100==0 && year%400==0)return "true";
    
    return "false";
}
int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    cin>>y;
    cout<<CheckYear(y);
    return 0;
}