#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    // 변수 선언: 
    int A[100], n;

    // 입력:
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
        
    // 내림차순으로 정렬합니다.
    sort(A, A+n, greater<int>()); 
    
    // 출력:
    cout << A[0] << " " << A[1];
    return 0;
}