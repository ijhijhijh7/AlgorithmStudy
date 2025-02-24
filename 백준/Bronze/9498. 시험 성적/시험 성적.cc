#include <iostream>

int main()
{
    int score;
    std::cin >> score;
    if (score >= 90 && score <= 100)
        std::cout << "A" << std::endl;
    else if (score >= 80 && score < 90)
        std::cout << "B" << std::endl;
    else if (score >= 70 && score < 80)
        std::cout << "C" << std::endl;
    else if (score >= 60 && score < 70)
        std::cout << "D" << std::endl;
    else
        std::cout << "F" << std::endl;

    return 0;
}