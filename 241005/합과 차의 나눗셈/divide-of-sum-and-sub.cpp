#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int sum=a+b;
    int minus=a-b;

    double result=(double)(sum)/(minus);
    cout<<fixed;
    cout.precision(2);
    cout<<result;
}