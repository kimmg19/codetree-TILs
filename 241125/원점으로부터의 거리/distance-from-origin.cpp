#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000

class Point{
    public :
    int v1;
    int v2;
    int n;
    Point(){};
    Point(int v1,int v2,int n){
        this->v1=v1;
        this->v2=v2;
        this->n=n;
    }
};

bool compare(const Point &p1,const Point &p2){
    return p1.v1+p1.v2<p2.v1+p2.v2;

}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Point point[MAX];
    for(int i=0;i<n;i++){
        int v1,v2;
        cin>>v1>>v2;
        point[i]=Point(v1,v2,i+1);
    }
    sort(point,point+n,compare);
    for(int i=0;i<n;i++){
        cout<<point[i].n<<endl;
    }
    return 0;
}