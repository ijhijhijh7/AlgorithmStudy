#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int D = a * e - b * d;
    int Dx = c * e - b * f;
    int Dy = a * f - c * d;

    if (D == 0) {
        return 1;
    }

    int x = Dx / D;
    int y = Dy / D;

    cout << x << " " << y << "\n";
    return 0;
}