#include <iostream>

void calculate()
{
    float a, b, c;
    char d;
    int p = 1;

    setlocale(LC_CTYPE, "Russian");
    while (p < 2)
    {
        std::cout << " 1 = calculator \n 2 - exit \n";
        std::cin >> p;
        switch (p)
        {
        case 1:
        {
            float c;
            std::cout << "Введите первую переменную: "; std::cin >> a;
            std::cout << "Введите вторую переменную: "; std::cin >> b;
            std::cout << "Какую операцию произвести? "; std::cin >> d;
            if (d == '+') {
                c = a + b;
                std::cout << "Результат сложения: " << c << std::endl;
            }
            if (d == '-') {
                c = a - b;
                std::cout << "Результат вычитания: " << c << std::endl;
            }
            if (d == '*') {
                c = a * b;
                std::cout << "Результат уумножения: " << c << std::endl;
            }
            if (d == '/') {
                c = a / b;
                std::cout << "Результат деления: " << c << std::endl;
            }

        }
        case 2:
        {
            break;
        }
        }
    }
}
