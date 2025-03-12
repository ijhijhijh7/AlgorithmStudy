#include <iostream>
#include <string>
#include <vector>

void quickSort(std::vector<int>& arr, int start, int end) {
    if (start >= end)
    {
        return;
    }

    int pivot = arr[start];  // 피벗을 첫 번째 원소로 선택
    int i = start + 1, j = end;  //배열 내 요소를 왼쪽과 오른쪽에서 접근하기 위한 인덱스 변수

    while (i <= j)
    {
        while (i <= end && arr[i] <= pivot)
        {
            i++;  //왼쪽에서부터 배열 내 요소를 피벗과 비교하여 피벗보다 큰값을 만날 때까지 반복
        }
        while (j > start && arr[j] >= pivot)
        {
            j--;  //오른쪽에서부터 배열 내 요소를 피벗을 비교하여 피벗보다 작은값을 만날 때까지 반복
        }
        if (i >= j) //인덱스가 만나거나 엇갈릴 시 반복문 종료
        {
            break;
        }
        std::swap(arr[i], arr[j]);  //인덱스가 만나거나 엇갈리지 않을 시 두 값을 교환
    }
    std::swap(arr[start], arr[j]);  //두 인덱스가 만나거나 엇갈릴 시 j값과 피벗값을 교환

    //교체된 피벗값을 기준으로 나눠진 배열 요소들을 재귀를 통해 앞의 과정을 반복
    quickSort(arr, start, j - 1);
    quickSort(arr, j + 1, end);
}


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
    std::cin >> S;

    std::vector<int> smallletter(26);
    std::vector<int> bigletter(26);
    std::vector<int> sum(26);

    for (char c : S) {
        if ('a' <= c && c <= 'z') {
            smallletter[c - 'a']++; // 해당 알파벳 개수 증가
        }
        else if ('A' <= c && c <= 'Z') {
            bigletter[c - 'A']++;   // 해당 알파벳 개수 증가
        }
    }

    for (int i = 0; i < 26; i++)
    {
        sum[i] = smallletter[i] + bigletter[i];
    }

    quickSort(sum, 0, 25);

    if (sum[25] == sum[24])
    {
        std::cout << "?";
    }
    else
    {
        for (int i = 0; i < 26; i++)
        {
            if (smallletter[i] + bigletter[i] == sum[25])
            {
                std::cout << char('A' + i);
                break;  // 가장 많이 나온 알파벳을 찾으면 출력 후 종료
            }
        }
    }

    return 0;
}