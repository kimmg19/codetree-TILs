#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>


using namespace std;
#define MAX 10

int main(){
    int n;
    cin>>n;
    tuple<int,string,int> personData[MAX];
    for(int i=0;i<n;i++){
        string name;
        int height;
        int weight;
        cin>>name>>height>>weight;
        personData[i]=make_tuple(height,name,weight);
    }
    sort(personData,personData+n);
    for(int i=0;i<n;i++){
        string name;
        int height,weight;
        tie(height,name,weight)=personData[i];
        cout<<name<<" "<<height<<" "<<weight<<endl;
    }
}
