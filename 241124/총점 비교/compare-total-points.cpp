#include <iostream>
#include <tuple>
#include <algorithm>

using namespace std;
#define MAX 10


bool compare(tuple<string,int,int,int> s1, tuple<string,int,int,int> s2){
    string name1,name2;
    int a1,b1,c1,a2,b2,c2;
    tie(name1,a1,b1,c1)=s1;
    tie(name2,a2,b2,c2)=s2;
    return a1+b1+c1 < a2+b2+c2;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    tuple<string,int,int,int> student[MAX];
    for(int i=0;i<n;i++){
        string n;
        int a,b,c;
        cin>>n>>a>>b>>c;
        student[i]=make_tuple(n,a,b,c);
    }

    sort(student,student+n,compare);
    for(int i=0;i<n;i++){
        string name;
        int a,b,c;
        tie(name,a,b,c)=student[i];
        cout<<name<<" ";
        cout<<a<<" ";
        cout<<b<<" ";
        cout<<c<<" "<<endl;
    }
    return 0;
}