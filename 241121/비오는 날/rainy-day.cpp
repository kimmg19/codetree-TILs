#include <iostream>
#include <string>

using namespace std;
#define MAX 100
class WeatherData{
    public :
    string date;
    string day;
    string weather;
    WeatherData(){};
    WeatherData(string date,string day,string weather){
        this->date=date;
        this-> day=day;
        this-> weather=weather;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int index;
    cin>>n;
    WeatherData weatherData[MAX];
    string W_date,W_day,W_weather;
    for(int i=0;i<n;i++){
        cin>>W_date>>W_day>>W_weather;
        weatherData[i]=WeatherData(W_date,W_day,W_weather);

        if(W_weather=="Rain")index=i;
    }
    
    
    for(int i=index-1;i>=0;i--){
        if(weatherData[i].weather=="Rain"){            
            if(weatherData[i].date<weatherData[index].date){
             index=i;   
            }
        }
    }
    cout<<weatherData[index].date<<" "<<weatherData[index].day<<" "<<weatherData[index].weather;
    return 0;
}