#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,cnt=0,sum=0;
    char alpha;
    cin>>n;

    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    cin>>alpha;

    for(int i=0;i<n;i++){
        if(str[i][0]==alpha){
            cnt++;
            sum+=str[i].length();
        }
    }
    cout<<fixed;
    cout.precision(2);
    cout<<cnt<<" ";
    cout<<(double)sum/cnt;
    return 0;
}