#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <ctime>

int main()
{
    
    const time_t tm = time(nullptr);

    char buf[64];
    strftime(buf, std::size(buf), "%d.%m.%Y", localtime(&tm));
    std::cout << buf << std::endl;
}