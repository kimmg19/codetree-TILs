#include <iostream>
using namespace std;

class Spy{
    public :
    char codeName;
    int score;
    Spy(char codeName,int score){
        this->codeName=codeName;
        this->score=score;
    }
    Spy(){}
};

int main() {
    // 여기에 코드를 작성해주세요.
    Spy spies[5];
    for(int i=0;i<5;i++){
        char s_code;
        int s_socre;
        cin>>s_code>>s_socre;
        spies[i].codeName=s_code;
        spies[i].score=s_socre;
    }
    int min=100;
    int num=0;
    for(int i=0;i<5;i++){
        if(spies[i].score<=min){
            min=spies[i].score;
            num=i;
        }
    }
    cout<<spies[num].codeName<<" "<<spies[num].score;
    return 0;
}