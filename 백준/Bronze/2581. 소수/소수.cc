#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isDecimal(int num) {
    if (num < 2) return false;  // 1 이하의 숫자는 소수가 아님
    for (int i = 2; i * i <= num; i++) {  
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int M, N;
    cin >> M >> N;

    vector<int> decimal;
    int decimalSum = 0;

    for (int i = M; i <= N; i++) {
        if (isDecimal(i)) {  // 소수 판별 함수 호출
            decimal.push_back(i);
            decimalSum += i;
        }
    }

    if (decimal.empty()) {
        cout << "-1";  // 소수가 없을 경우
    }
    else {
        cout << decimalSum << "\n" << decimal[0];  // 소수의 합과 최솟값 출력
    }

    return 0;
}