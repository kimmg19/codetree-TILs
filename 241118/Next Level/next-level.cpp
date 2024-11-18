#include <iostream>
#include <string>
using namespace std;

class Player{
    public :
    string player_ID;
    int player_level;
    Player(string player_ID="codetree", int player_level=10){
        this->player_ID=player_ID;
        this->player_level=player_level;
    }
};
int main() {
    // 여기에 코드를 작성해주세요.
    string p_ID;
    int p_level;
    cin>>p_ID>>p_level;
    Player player1=Player();
    Player player2=Player(p_ID,p_level);
    cout<<"user "<<player1.player_ID<<" lv "<<player1.player_level;
    cout<<"\n";
    cout<<"user "<<player2.player_ID<<" lv "<<player2.player_level;


    return 0;
}