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

    int N, M, i, j;

    std::cin >> N >> M;

    std::vector<std::vector<int>> procession1(N, std::vector<int>(M, 0));
    std::vector<std::vector<int>> procession2(N, std::vector<int>(M, 0));

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            std::cin >> procession1[i][j];
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            std::cin >> procession2[i][j];
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            std::cout << procession1[i][j] + procession2[i][j] << " ";
        }
        std::cout << "\n";
    }


    return 0;
}