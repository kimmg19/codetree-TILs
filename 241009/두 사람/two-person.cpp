#include <iostream>
using namespace std;

int main() {
    int p1,p2;
    char sex1,sex2;
    cin>>p1>>sex1>>p2>>sex2;
    cout<<((p1>=19&&sex1=='M')||(p2>19&&sex2=='M'));
    
    return 0;
}