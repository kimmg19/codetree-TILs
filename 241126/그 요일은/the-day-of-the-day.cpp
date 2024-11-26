#include <iostream>
#include <string>
using namespace std;

    int days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string day_of_week[8] = {"","Tue", "Wed", "Thu", "Fri", "Sat", "Sun","Mon"};


int Fnc(int m,int d){
    int day=0;
    for(int i=1;i<=m;i++){
        if(m==i) day+=d;
        else day+=days[i];

    }
    return day;
}

int Fnc2(string str){
    for(int i=1;i<8;i++){
        if(day_of_week[i]==str)
        return i;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m1,d1,m2,d2;
    string str;
    cin>>m1>>d1>>m2>>d2;
    cin>>str;
    int m1_day=Fnc(m1,d1);
    int m2_day=Fnc(m2,d2);
    int dayDif=m2_day-m1_day;
    int addDay=Fnc2(str);
    if(dayDif%7>=addDay)
        cout<<dayDif/7+1;
    else cout<<dayDif/7;

    return 0;
}