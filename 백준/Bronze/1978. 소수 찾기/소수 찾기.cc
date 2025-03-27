#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N, a, i, temp, sum = 0;

    cin >> N;
    vector<int> decimal(N);
    for (a = 0; a < decimal.size(); a++)
    {
        int count = 0;
        cin >> temp;
        for (i = 1; i < temp / 2 + 1; i++)
        {
            if (temp % i == 0)
            {
                count++;
            }
        }
        decimal[a] = count;
    }

    for (i = 0; i < decimal.size(); i++)
    {
        if (decimal[i] == 1)
            sum++;
    }

    cout << sum;

    return 0;
}