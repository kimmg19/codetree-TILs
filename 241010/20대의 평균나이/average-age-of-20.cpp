#include <iostream>
using namespace std;

int main() {
    int age;
    int sum=0;
    int cnt=0;
    while(1){
        cin>>age;        
    if (!(age>=20&&age<=29))
        break;
    else {
        cnt++;
        sum+=age;
    } 
    }
    cout<<fixed;
    cout.precision(2);
    cout<<(double)sum/cnt;
    return 0;
}