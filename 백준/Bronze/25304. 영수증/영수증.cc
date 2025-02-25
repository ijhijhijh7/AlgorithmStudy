#include <iostream>

int main()
{
    int sum, count, testSum = 0, price, quantity;
    std::cin >> sum >> count;

    for (int i = 0; i < count; i++)
    {
        std::cin >> price >> quantity;
        testSum += price * quantity;
    }

    if(sum == testSum)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
    
        
    return 0;
}