#include <iostream>
#include <string>

using namespace std;
#define MAX 10
class PlayerData{
    public :
    string name;
    string addr;
    string city;
    PlayerData(){}
    PlayerData(string name,string addr,string city){
        this->name=name;
        this->addr=addr;
        this->city=city;
    }
};
int main() {
    PlayerData playerData[MAX];
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string name;
        string addr;
        string city;
        cin>>name>>addr>>city;
        playerData[i]=PlayerData(name,addr,city);
    }
    int index=0;
    string maxStr=playerData[0].name;
    for(int i=1;i<n;i++){
        if(playerData[i].name>playerData[index].name){
            index=i;
        }
    }
    cout<<"name "<<playerData[index].name<<endl;
    cout<<"addr "<<playerData[index].addr<<endl;
    cout<<"city "<<playerData[index].city<<endl;

    return 0;
}