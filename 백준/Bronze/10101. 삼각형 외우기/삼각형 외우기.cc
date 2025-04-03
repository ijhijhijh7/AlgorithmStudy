#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b, c;

    cin >> a >> b >> c;

    if ((a == 60 && b == 60 && c == 60) && (a + b + c == 180))
        cout << "Equilateral";
    else if ((a == b || b == c || a == c) && (a + b + c == 180))
        cout << "Isosceles";
    else if (a + b + c == 180)
        cout << "Scalene";
    else if (a + b + c != 180)
        cout << "Error";

    return 0;
}