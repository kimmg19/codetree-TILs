#include <iostream>
using namespace std;
#define NMAX 99
#define TMAX 250
class Developer{
    public :
    int shakeAmount;
    bool isInfection;
    Developer(){
        this->isInfection=false;
        this->shakeAmount=0;
    }
    Developer(int shakeAmount){
        this->shakeAmount=shakeAmount;
        this->isInfection=false;
    }
};
class ShakeInfo{
    public:
    int x,y;
    ShakeInfo(){
        this->x=0;
        this->y=0;
    }
    ShakeInfo(int x,int y){
        this->x=x;
        this->y=y;
    }
};

Developer developer[NMAX]={};
ShakeInfo shakeInfo[TMAX]={};
//악수 횟수가 남아있는지. 
void Shaking(){
    for(int i=0;i<TMAX;i++){
        if(shakeInfo[i].x==0)continue;  

        // if(developer[shakeInfo[i].x-1].isInfection && developer[shakeInfo[i].x-1].shakeAmount>0){          
        //     if(developer[shakeInfo[i].y-1].isInfection) developer[shakeInfo[i].y-1].shakeAmount--;
        //     developer[shakeInfo[i].y-1].isInfection=true;
        //     developer[shakeInfo[i].x-1].shakeAmount--;
        // }
        // else if(developer[shakeInfo[i].y-1].isInfection && developer[shakeInfo[i].y-1].shakeAmount>0){            
        //     if(developer[shakeInfo[i].x-1].isInfection) developer[shakeInfo[i].x-1].shakeAmount--;
        //     developer[shakeInfo[i].x-1].isInfection=true;
        //     developer[shakeInfo[i].y-1].shakeAmount--;
        //     cout<<" "<<developer[shakeInfo[i].y-1].shakeAmount<<endl;
        // }
        // else continue;

         if(developer[shakeInfo[i].x-1].isInfection || developer[shakeInfo[i].y-1].isInfection){
             if(developer[shakeInfo[i].x-1].shakeAmount==0 || developer[shakeInfo[i].y-1].shakeAmount==0)continue;
              developer[shakeInfo[i].x-1].isInfection=true;
              developer[shakeInfo[i].y-1].isInfection=true;
              developer[shakeInfo[i].x-1].shakeAmount--;
              developer[shakeInfo[i].y-1].shakeAmount--;
         }        
    }
}


int main() {
    // Please write your code here.
    int N,K,P,T;   

    cin>>N>>K>>P>>T;
    for(int i=0;i<N;i++){
            developer[i]=Developer(K);
    }

    developer[P].isInfection=true;

    for(int i=0;i<T;i++){
        int t,x,y;
        cin>>t>>x>>y;
        shakeInfo[t-1]=ShakeInfo(x,y);
    }
    Shaking();
    for(int i=0;i<N;i++){
        cout<<developer[i].isInfection;
    }
    return 0;
}