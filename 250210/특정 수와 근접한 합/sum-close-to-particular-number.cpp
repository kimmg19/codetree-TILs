#include <iostream>
#include <climits>
#include <algorithm>
#include <cstdlib>
using namespace std;

int N, S;
int arr[100];

int main() {
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int minVal=INT_MAX;
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            int sum=0;
            for(int k=0;k<N;k++){
                if(arr[k]==arr[i] || arr[k]==arr[j])continue;
                    sum+=arr[k];
                    
            }              
            int minNum=abs(S-sum);            
            minVal=min(minVal,minNum);
        }
    }
    cout<<minVal;    

    return 0;
}