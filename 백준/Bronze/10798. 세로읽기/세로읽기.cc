#include <iostream>
#include <vector>
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

    int i, j;
    std::string line;

    std::vector<std::string> procession(5, ""); // 5줄 저장용 벡터

    for (i = 0; i < 5; i++) {
        std::getline(std::cin, procession[i]);  // 한 줄 전체 입력받기
    }

    // 세로 방향으로 출력 (공백 없이 한 줄로)
    for (j = 0; j < 15; j++) {  // 최대 15글자까지 검사
        for (i = 0; i < 5; i++) {
            if (j < procession[i].size()) {
                std::cout << procession[i][j];
            }
        }
    }

    return 0;
}