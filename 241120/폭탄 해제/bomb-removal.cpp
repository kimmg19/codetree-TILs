#include <iostream>
#include <string>

using namespace std;

class Bomb{
    public :
    string code;
    char color;
    int second;
    Bomb(){}
    Bomb(string code,char color,int second){
        this->code=code;
        this->color=color;
        this->second=second;

    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    Bomb bomb;
    string b_code;
    char b_color;
    int b_second;
    cin>>b_code>>b_color>>b_second;
    bomb=Bomb(b_code,b_color,b_second);
    cout<<"code : "<<bomb.code<<endl;
    cout<<"color : "<<bomb.color<<endl;
    cout<<"second : "<<bomb.second;


    return 0;
}