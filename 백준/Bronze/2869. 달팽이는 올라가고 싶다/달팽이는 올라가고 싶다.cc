#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int A, B, V, dif = 0, count = 0;

    cin >> A >> B >> V;

    dif = A - B;

    count = (V - A) / dif + 1;
    if ((V - A) % dif != 0)
    {
        count++;
    }

    cout << count;

    return 0;
}