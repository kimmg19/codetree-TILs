#include <iostream>
using namespace std;

int pnt=50000;
class Arr{
    public:
    int r;
    int black_cnt;
    int white_cnt;
    Arr(){
        this->r=0;
        this->black_cnt=0;
        this->white_cnt=0;
    };
};
void Fnc(Arr * arr,int x,char r){
    if(r=='R'){
        for(int i=0;i<x;i++)
        {
            arr[pnt].r=1;
            arr[pnt].black_cnt++;
            if(i!=x-1)pnt++;
        }
    }else{
        for(int i=0;i<x;i++)
        {            
            arr[pnt].r=2;
            arr[pnt].white_cnt++;
            if(i!=x-1)pnt--;
        }
    }
    
}

int main() {
    // 여기에 코드를 작성해주세요.
    int grayCnt=0;
    int blackCnt=0;
    int whiteCnt=0;

    int n;
    cin>>n;
    Arr arr[100000];
   
    for(int i=0;i<100000;i++)
        arr[i]=Arr();
    for(int i=0;i<n;i++){
        int x;
        char r;
        cin>>x>>r;
        Fnc(arr,x,r);
    }
    for(int i=0;i<100000;i++){
        if(arr[i].black_cnt>=2 && arr[i].white_cnt>=2){
            grayCnt++;
            continue;
        }
        if(arr[i].r==1)blackCnt++;
        if(arr[i].r==2)whiteCnt++;
    }
    cout<<whiteCnt<<" "<<blackCnt<<" "<<grayCnt;
    return 0;
}