#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m1,d1,m2,d2;
    cin>>m1>>d1>>m2>>d2;
    int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int day_of_month1=0;
    int day_of_month2=0;

    for(int i=1;i<=m1;i++){
        if(i==m1)day_of_month1+=d1;

        day_of_month1+=arr[i];
    } 
    for(int i=1;i<=m2;i++){
        if(i==m2)day_of_month2+=d2;
        day_of_month2+=arr[i];
    }  
    if(day_of_month1==day_of_month2)cout<<1;
    else cout<<day_of_month2-day_of_month1;
    return 0;
}