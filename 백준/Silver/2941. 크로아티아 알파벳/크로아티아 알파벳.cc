#include <iostream>
#include <string>
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

    std::string S;
    int count = 0, i = 0;

    std::vector<std::string> checkList = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    std::cin >> S; // 단어 하나 입력받기

    while (i < S.length()) {
        bool found = false;

        for (const std::string& word : checkList) {
            if (S.substr(i, word.length()) == word) {  // 현재 위치에서 단어가 시작하는지 확인
                count++;
                i += word.length();  // 단어 길이만큼 건너뛰기
                found = true;
                break;  // 하나 찾았으면 다른 단어 확인할 필요 없음
            }
        }

        if (!found) {  // 특수 단어가 아니면 그냥 1글자로 처리
            count++;
            i++;
        }
    }

    std::cout << count << '\n';  // 최종 개수 출력
    return 0;
}