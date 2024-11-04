#include <iostream>

using namespace std;

bool ThreeSixNine(int n){   
    string ntos=to_string(n);
    for(int i=0;i<ntos.length();i++){
        if(ntos[i]!='0' && (ntos[i]-'0')%3==0) {return true;}
    }
    return false;
}
int CheckNumber(int a,int b){
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(ThreeSixNine(i) || (i%3==0)){
           
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int a,b;
    cin>>a>>b;
    cout<<CheckNumber(a,b);
    return 0;
}