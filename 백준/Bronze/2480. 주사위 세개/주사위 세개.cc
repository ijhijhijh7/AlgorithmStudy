#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a == b && b == c)
        std::cout << 10000 + a * 1000 << std::endl;
    else if (a == b || a == c)
        std::cout << 1000 + a * 100 << std::endl;
    else if (b == c)
        std::cout << 1000 + b * 100 << std::endl;
    else
    {
        if (a > b && a > c)
            std::cout << 100 * a << std::endl;
        else
        {
            if (b < c)
                std::cout << 100 * c << std::endl;
            else
                std::cout << 100 * b << std::endl;
        }
    }
            
        
    return 0;
}