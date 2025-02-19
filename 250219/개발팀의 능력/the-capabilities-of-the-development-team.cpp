#include <iostream>
#include <algorithm>
using namespace std;
    int arr[5];
    int n=5;

int Diff(int i, int j, int k, int l) {
    int total_sum = 0;
    for(int l = 0; l < n; l++)
        total_sum += arr[l];
    
    // 세 번째 팀원의 합은 전체에서 첫 번째 팀원과 두 번째 팀원의 합을 빼주면 됩니다.
    int sum1 = arr[i] + arr[j];
	int sum2 = arr[k] + arr[l];
    int sum3 = total_sum - sum1 - sum2;

	int maxteam=max(sum1,sum2);
    maxteam=max(maxteam,sum3);
    int minmteam=min(sum1,sum2);
    minmteam=min(minmteam,sum3);
    int ret=maxteam-minmteam;
    if(ret==0){
        return 1000;
    }
    
	
    return ret;
}
int main() {
    // Please write your code here.
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int min_diff=10000;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
			
			// 두 번째 팀원을 만들어줍니다.
            for(int k = 0; k < n; k++){
				for(int l = k + 1; l < n; l++) {
					//첫 번째 팀원과 두 번째 팀원이 겹치는지 여부를 확인합니다.
					if(k == i || k == j || l == i || l == j)
						continue;
					min_diff = min(min_diff, Diff(i, j, k, l));
				}
            }
        }
    }
    if(min_diff==1000){
        cout<<-1;
        return 0;
    }
    cout<<min_diff;
    return 0;
}