#include <iostream>
#include <string>
using namespace std;

class Spy{
    public :
    string code;
    char place;
    int time;
    Spy(string code, char place, int time){
        this->code=code;
        this->place=place;
        this ->time=time;
    }
};


int main() {
    // 여기에 코드를 작성해주세요.
    string code;
    char place;
    int time;
    cin>>code>>place>>time;

    Spy spy=Spy(code,place,time);
    cout<<"secret code : "<<spy.code<<endl;
    cout<<"meeting point : "<<spy.place<<endl;
    cout<<"time : "<<spy.time<<endl;

    return 0;
}