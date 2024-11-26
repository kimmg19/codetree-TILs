#include <iostream>
#include <string>
using namespace std;


    int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int Fnc(int m,int d){
    int day_of_month1=0;
    for(int i=1;i<=m;i++){
        if(i==m)day_of_month1+=d;

        else day_of_month1+=arr[i];
    } 
    return day_of_month1;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int m1,d1,m2,d2;
    cin>>m1>>d1>>m2>>d2;
    string day[7]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

    int dayOfM1=Fnc(m1,d1);
    int dayOfM2=Fnc(m2,d2);
    int Dif=(dayOfM2-dayOfM1)%7;
    if(Dif>=0){
        cout<<day[Dif];
    }  else{
        cout<<day[7+Dif];
    }

     
    return 0;
}