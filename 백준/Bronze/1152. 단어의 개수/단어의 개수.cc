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

    int count = 1, i = 0;
    char temp;

    std::string S;
    std::getline(std::cin, S);

    if (S[0] == ' ')
    {
        count -= 1; //string의 맨 앞이 공백으로 들어올 시 공백으로 인한 단어추가가 아니므로 count 감소
    }

    if (S[S.length() - 1] == ' ')
    {
        count -= 1; //string의 맨 뒤가 공백으로 들어올 시 공백으로 인한 단어추가가 아니므로 count 감소
    }

    while (S[i] != '\0') //i < S.length()
    {
        if (S[i] == ' ')
        {
            count++;
        }
        i++;
    }

    std::cout << count;

    return 0;
}