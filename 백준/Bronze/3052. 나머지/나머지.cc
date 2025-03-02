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

    int temp, i, j, count = 0;
    std::vector<int> resultVector(42);  //벡터는 선언한 자료형의 기본값으로 초기화 '0'

    for(i = 0; i < 10; i++)
    {
        std::cin >> temp;
        resultVector[temp % 42]++;
    }

    for (i = 0; i < 42; i++)
    {
        if (resultVector[i] != 0)
            count++;
    }

    std::cout << count;

    return 0;
}