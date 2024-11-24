#include <iostream>
#include <string>
#include <algorithm>


using namespace std;
#define MAX 10

class Student{
    public :
    string name;
    int kor;
    int eng;
    int math;
    Student(){};
    Student(string name,int kor,int eng, int math){
        this->name=name;
        this->kor=kor;
        this->eng=eng;
        this->math=math;
    }
};

bool compare(const Student &s1,const Student &s2){
    if(s1.kor==s1.kor){
        if(s1.eng==s1>eng) return s1.main>s2.math;
        else return s1.eng>s2.eng;
    }
    return s1.kor>s2.kor;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Student student[MAX];
    for(int i=0;i<n;i++){
        string s_name;
        int s_kor,s_eng,s_math;
        cin>>s_name>>s_kor>>s_eng>>s_math;
        student[i]=Student(s_name,s_kor,s_eng,s_math);
    }

    sort(student,student+n,compare);

    for(int i=0;i<n;i++){
        cout<<student[i].name<<" "<<student[i].kor<<" "<<student[i].eng<<" "<<student[i].math<<endl;
    }
    return 0;
}