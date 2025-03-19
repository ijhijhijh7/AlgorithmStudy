#include <iostream>
using namespace std;


int main()
{
    //cin과 cout의 연결을 끊는 명령어
    //cin의 입력이 cout의 출력을 강제로 플러시하지 않게 되어, 더 빠른 입출력이 가능
    cin.tie(NULL);

    //C++의 표준 입출력(cin, cout)과 
    //C 스타일의 입출력(stdio 라이브러리의 printf, scanf) 간의 동기화를 끊는 명령어
    //printf나 scanf와 cin, cout을 섞어 사용할 때 발생할 수 있는 문제를 예방
    ios::sync_with_stdio(false);

    int B, sum = 0;
    string N;

    cin >> N >> B;

    for (int i = 0; i < N.size(); i++) {
        if (N[i] >= '0' && N[i] <= '9') {
            sum = sum * B + (N[i] - '0');
        }
        else
            sum = sum * B + (N[i] - 'A' + 10);
    }

    cout << sum;

    return 0;
}