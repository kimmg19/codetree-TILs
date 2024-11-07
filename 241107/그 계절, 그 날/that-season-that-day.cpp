#include <iostream>
using namespace std;

bool isYoon(int year){
    if(year%4!=0)return false;
    if(year%100==0){
        if(year%400==0)return true;
        else return false;
    }      
    return true;
}
int CheckWeather(int year,int month, int day){
    if(isYoon(year)){
        if(month==2){
            if(day<=29)return month;
        }else if (month==4 || month==6||month==9||month==11){
            if(day<=30)return month;
        }else {
            if(day<=31) return month;
        }           
        
    }else{
        if(month==2){
            if(day<=28)return month;
        }else if (month==4 || month==6||month==9||month==11){
            if(day<=30)return month;
        }else {
            if(day<=31) return month;
        }  
    }
    
    return -1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y,m,d;
    int weather;
    cin>>y>>m>>d;
    weather=CheckWeather(y,m,d);
    if(weather>=3 && weather<=5)cout<<"Spring";
    else  if(weather>=6 && weather<=8)cout<<"Summer";
    else  if(weather>=9 && weather<=11)cout<<"Fall";
    else  if(weather==12||(weather>=1 && weather<=2))cout<<"Winter";
    else cout<<-1;
    return 0;
}