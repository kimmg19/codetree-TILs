#include <iostream>
using namespace std;

int main() {
    int n;
    char cnt='A';
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<cnt++;
        }
    }
    return 0;
}