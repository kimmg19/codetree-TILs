#include <iostream>
#include <string>
#include <algorithm>


using namespace std;
#define MAX 10

class PersonData{
    public :
    string name;
    int height;
    int weight;
    PersonData(){};
    PersonData(string name,int height, int weight){
        this->name=name;
        this->height=height;
        this->weight=weight;
    }
};
bool compare(const PersonData &p1, const PersonData &p2){
    return p1.height<p2.height;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    PersonData personData[MAX];
    for(int i=0;i<n;i++){
        string name;
        int height,weight;
        cin>>name>>height>>weight;
        personData[i]=PersonData(name,height,weight);
    }
    sort(personData,personData+5,compare);
    for(int i=0;i<n;i++){
        cout<<personData[i].name<<" "<<personData[i].height<<" "<<personData[i].weight<<endl;
    }
    return 0;
}