#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int X;
    cin >> X;

    // 분모, 분자 계산을 위한 변수
    int mol = 1, den = 1;
    int addRange = 4, rangeSize = 5;
    int rangeStart = 1;

    // 분모 계산 (X + 1번째 값을 찾기 위해 X번째 값까지 반복)
    for (int i = 0; i < X - 1; i++) {  // X번째 값만 계산
        int relativePos = i - rangeStart;

        if (i != 0) {
            if (relativePos < rangeSize / 2)
                mol++;
            else
                mol--;
        }

        if (relativePos + 1 == rangeSize) {
            rangeStart = i + 1;
            rangeSize += addRange;
            mol = 1;
        }
    }

    addRange = 4, rangeSize = 3;
    rangeStart = 0;

    // 분자 계산 (X + 1번째 값을 찾기 위해 X번째 값까지 반복)
    for (int j = 0; j < X - 1; j++) {  // X번째 값만 계산
        int relativePos = j - rangeStart;

        if (relativePos < rangeSize / 2)
            den++;
        else
            den--;

        if (relativePos + 1 == rangeSize) {
            rangeStart = j + 1;
            rangeSize += addRange;
            den = 1;
        }
    }

    // X번째 입력에 대해 다음 값 출력
    cout << mol << "/" << den << endl;

    return 0;
}