#include <iostream>
#include <string>
#include <map>


int main()
{
    //cin과 cout의 연결을 끊는 명령어
    //cin의 입력이 cout의 출력을 강제로 플러시하지 않게 되어, 더 빠른 입출력이 가능
    std::cin.tie(NULL);

    //C++의 표준 입출력(cin, cout)과 
    //C 스타일의 입출력(stdio 라이브러리의 printf, scanf) 간의 동기화를 끊는 명령어
    //printf나 scanf와 cin, cout을 섞어 사용할 때 발생할 수 있는 문제를 예방
    std::ios::sync_with_stdio(false);

    std::string subjects, unit;

    float totalScore = 0, totalGrade = 0, grade = 0;
    int i;

    std::map<std::string, float> unitScore = 
    {
        {"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0},
        {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}
    };

    for (i = 0; i < 20; i++) 
    {
        std::cin >> subjects >> grade >> unit;  // 과목명, 학점(실수), 등급 입

        if (unitScore.find(unit) != unitScore.end()) {  // 학점이 존재하면
            totalScore += grade * unitScore[unit];  // 학점에 해당하는 점수 계산
            totalGrade += grade;
        }
    }

    totalScore = totalScore / totalGrade;
    std::cout << totalScore;

    return 0;
}