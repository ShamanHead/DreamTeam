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
            std::cout << "������� ������ ����������: "; std::cin >> a;
            std::cout << "������� ������ ����������: "; std::cin >> b;
            std::cout << "����� �������� ����������? "; std::cin >> d;
            if (d == '+') {
                c = a + b;
                std::cout << "��������� ��������: " << c << std::endl;
            }
            if (d == '-') {
                c = a - b;
                std::cout << "��������� ���������: " << c << std::endl;
            }
            if (d == '*') {
                c = a * b;
                std::cout << "��������� ����������: " << c << std::endl;
            }
            if (d == '/') {
                c = a / b;
                std::cout << "��������� �������: " << c << std::endl;
            }

        }
        case 2:
        {
            break;
        }
        }
    }
}
