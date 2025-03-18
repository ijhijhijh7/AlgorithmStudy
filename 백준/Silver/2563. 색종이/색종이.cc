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

    int sum = 0, a, i, j, N, x, y;
    std::vector<std::vector<int>> squareCoordinate(100, std::vector<int>(100, 0));

    std::cin >> N;
    for (a = 0; a < N; a++)
    {
        std::cin >> x >> y;
        for (i = y; i < y + 10; i++) {
            for (j = x; j < x + 10; j++) {
                squareCoordinate[i][j] = 1;
            }
        }
    }

    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++) {
            if (squareCoordinate[i][j] == 1)
            {
                sum++;
            }
        }
    }

    std::cout << sum;

    return 0;
}