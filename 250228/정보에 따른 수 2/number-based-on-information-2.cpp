#include <iostream>
using namespace std;
class A{
    public :
    char chr;
    int point;
    A(){}
    A(char chr,int p){
        this->chr=chr;
        this->point=p;
    }
};
int main() {
    // Please write your code here.
    int t,a,b;
    cin>>t>>a>>b;
    A fuck[100];
    for(int i=0;i<t;i++){
        char alpha;
        int num;
        cin>>alpha>>num;
        fuck[i]=A(alpha,num);        
    }
    
    int cnt=0;
    for(int i=a;i<=b;i++){      
        int minS=1001;
        int minN=1001;  
        for(int j=0;j<t;j++){
            if(fuck[j].chr=='S'){
                minS=min(minS,abs(i-fuck[j].point));
            }else if(fuck[j].chr=='N'){
                minN=min(minN,abs(i-fuck[j].point));
            }
        }
        if(minS<=minN)cnt++;
    }
    cout<<cnt;
    return 0;
}