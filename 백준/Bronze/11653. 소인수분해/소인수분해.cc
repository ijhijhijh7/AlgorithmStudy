#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;

    cin >> N;
    while (N != 1) 
    {
        int i = 2;
        while (N % i != 0) 
        {
            i++;  // 나누어떨어질 때까지 i 증가
        }
        cout << i << "\n";  // 소인수 출력
        N /= i;  // N을 i로 나눔
    }

    return 0;
}