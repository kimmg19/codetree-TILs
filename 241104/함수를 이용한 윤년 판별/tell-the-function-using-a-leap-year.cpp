#include <iostream>
using namespace std;
bool CheckYear(int year){
    if(year%4==0){
        if(year%100==0){
            if(year%400==0)return true;
            else return false;
        }
        else return true;
    }else return false;
    
}
int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    cin>>y;
    if(CheckYear(y))cout<<"true";
    else cout<<"false";
    return 0;
}