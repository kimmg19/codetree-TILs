#include <iostream>
using namespace std;

void Fnc(int n){
    if(n<1)return;

    for(int i=0;i<n;i++){
        cout<<"* ";
    }
    cout<<endl;
    Fnc(n-1);
    for(int i=0;i<n;i++){
        cout<<"* ";
    }
    cout<<endl;

}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Fnc(n);
    return 0;
}