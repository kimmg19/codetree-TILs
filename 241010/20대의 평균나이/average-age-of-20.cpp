#include <iostream>
using namespace std;

int main() {
    int age;
    int sum=0;
    int cnt=0;
    cin>>age;
    while(age>=20&&age<=29){
        cnt++;
        sum+=age;
    }
    cout<<fixed;
    cout.precision(2);
    cout<<(double)sum/age;
    return 0;
}