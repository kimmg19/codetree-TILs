#include <iostream>
#include <string>

using namespace std;

int n;
string seat;
int Fuck(){
    int mindis=1000;
    for(int i=0;i<seat.length();i++){
        for(int j=i+1;j<seat.length();j++){
            if(seat[i]=='1'&&seat[j]=='1'){
                mindis=min(mindis,j-i);
            }
        }
    }
    return mindis;
}
int main() {
    cin >> n;
    cin >> seat;
    int distance=1;
    for(int i=0;i<seat.length();i++){
        for(int j=i+1;j<seat.length();j++){
            if(seat[i]=='0'&& seat[j]=='0'){
                seat[i]='1';
                seat[j]='1';
                distance=max(distance,Fuck());
                seat[i]='0';
                seat[j]='0';
            }
        }
    }
    cout<<distance;
    return 0;
}