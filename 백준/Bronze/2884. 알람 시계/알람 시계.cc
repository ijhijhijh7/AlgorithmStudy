#include <iostream>

int main()
{
    int hour, minute;
    std::cin >> hour >> minute;
    if (minute < 45)
    {
        if (hour != 0) 
        {
            minute += 15;
            hour--;
        }
        else 
        {
            minute += 15;
            hour += 23;
        }
    }
    else
        minute -= 45;

    std::cout << hour << " " << minute << std::endl;

    return 0;
}