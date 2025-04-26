#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N, M, i;
    
    cin >> N >> M;
    vector<int> card(N);

    for (i = 0; i < N; i++)
    {
        cin >> card[i];
    }

    int maxSum = -1;

    int n = card.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = card[i] + card[j] + card[k];
                if (sum <= M && sum > maxSum) {
                    maxSum = sum;
                }
            }
        }
    }

    cout << maxSum;

    return 0;
}