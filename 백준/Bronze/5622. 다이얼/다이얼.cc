#include <iostream>
#include <string>

int main()
{
    //cin과 cout의 연결을 끊는 명령어
    //cin의 입력이 cout의 출력을 강제로 플러시하지 않게 되어, 더 빠른 입출력이 가능
    std::cin.tie(NULL);

    //C++의 표준 입출력(cin, cout)과 
    //C 스타일의 입출력(stdio 라이브러리의 printf, scanf) 간의 동기화를 끊는 명령어
    //printf나 scanf와 cin, cout을 섞어 사용할 때 발생할 수 있는 문제를 예방
    std::ios::sync_with_stdio(false);

    int time = 0;
    std::string S;
    std::cin >> S;

    int dial[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8,
                    9, 9, 9, 10, 10, 10, 10 };  // 'A' ~ 'Z' 에 해당하는 다이얼 시간

    for (char c : S) {
        time += dial[c - 'A'];  // 'A'를 0으로 맞춰서 배열 인덱싱
    }

    std::cout << time;
    return 0;
}