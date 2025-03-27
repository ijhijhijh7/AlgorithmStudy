#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    while (true) {
        cin >> n;

        if (n == -1)  // -1 입력 시 종료
            break;

        vector<int> measure;
        int sum = 0;

        // 1부터 n-1까지 n의 약수 찾기
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                measure.push_back(i);
                sum += i;  // 약수의 합 계산
            }
        }

        // 완전수인지 확인
        if (sum == n) {
            cout << n << " = ";
            for (int i = 0; i < measure.size(); i++) 
            {
                cout << measure[i];
                if (i != measure.size() - 1)
                    cout << " + ";
            }
            cout << "\n";
        }
        else {
            cout << n << " is NOT perfect.\n";
        }
    }

    return 0;
}