#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    string AB=a+b;
    string BA=b+a;
    cout<<stoi(AB)+stoi(BA);
    return 0;
}