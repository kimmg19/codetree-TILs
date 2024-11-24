#include <iostream>
#include <string>
#include <algorithm>
#include <tuple>

using namespace std;
#define MAX 10

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    tuple<int,int,int,string> student[MAX];
    for(int i=0;i<n;i++){
        string s_name;
        int s_kor,s_eng,s_math;
        cin>>s_name>>s_kor>>s_eng>>s_math;
        student[i]=make_tuple(-s_kor,-s_eng,-s_math,s_name);
    }

    sort(student,student+n);

    for(int i=0;i<n;i++){
    string name;
    int kor,eng,math;
    tie(kor,eng,math,name)=student[i];
    cout<<name<<" ";
    cout<<-kor<<" ";
    cout<<-eng<<" ";
    cout<<-math<<" "<<endl;   
    }
    return 0;
}