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

    int N, i, j, count = 0;
    std::string S;
    
    std::cin >> N;
    for (i = 0; i < N; i++)
    {
        std::cin >> S;
        std::vector<bool> visited(26, false);  // 알파벳 등장 여부 체크
        bool isContinuousWord = true;

        for (j = 0; j < S.length(); j++) {
            if (visited[S[j] - 'a']) {
                // 이전에 등장한 알파벳인데 연속되지 않다면 연속된 단어가 아님
                if (j > 0 && S[j] != S[j - 1]) {
                    isContinuousWord = false;
                    break;
                }
            }
            visited[S[j] - 'a'] = true;  // 현재 알파벳 방문 표시
        }

        if (isContinuousWord) {
            count++;
        }
    }

    std::cout << count;

    return 0;
}