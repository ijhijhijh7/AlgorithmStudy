#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b, c, maxSideLength;

    cin >> a >> b >> c;
    maxSideLength = max({ a, b, c });

    // 삼각형이 성립하는 경우
    if (maxSideLength < (a + b + c - maxSideLength)) {
        cout << a + b + c; // 최대 둘레
    }
    // 삼각형이 성립하지 않는 경우: 가장 긴 변이 나머지 두 변의 합보다 크거나 같음
    else {
        cout << (a + b + c - maxSideLength) * 2 - 1;
    }

    return 0;
}