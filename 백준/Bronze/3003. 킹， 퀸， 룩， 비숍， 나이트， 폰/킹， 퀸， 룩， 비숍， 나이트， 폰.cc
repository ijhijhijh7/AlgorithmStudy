#include <iostream>
#include <vector>

int main()
{
    //cin과 cout의 연결을 끊는 명령어
    //cin의 입력이 cout의 출력을 강제로 플러시하지 않게 되어, 더 빠른 입출력이 가능
    std::cin.tie(NULL);

    //C++의 표준 입출력(cin, cout)과 
    //C 스타일의 입출력(stdio 라이브러리의 printf, scanf) 간의 동기화를 끊는 명령어
    //printf나 scanf와 cin, cout을 섞어 사용할 때 발생할 수 있는 문제를 예방
    std::ios::sync_with_stdio(false);

    std::vector<int> chessPiece{ 1, 1, 2, 2, 2, 8 };
    std::vector<int> inputPieces(6);


    // 6개의 숫자를 입력받음
    for (int i = 0; i < 6; i++) {
        std::cin >> inputPieces[i];
    }

    // 비교하여 필요한 숫자 계산 후 출력
    for (int i = 0; i < 6; i++) {
        std::cout << (chessPiece[i] - inputPieces[i]) << " ";
    }
    std::cout << "\n";

    return 0;
}