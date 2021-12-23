#include <iostream>

void schedule()
{
    setlocale(LC_ALL, "Russian");

    int chislo;
    int vibor;
    do {
        std::cout << "Выберите день недели (от 1 до 6)\n";
        std::cout << "-------------------------------------\n";
        std::cout << "Введите число \n";
        std::cin >> chislo;
        switch (chislo)
        {
        case 1:
            std::cout << "-------------------------------------\n";
            std::cout << "Понедельник \n";
            std::cout << "1. СЯП \n";
            std::cout << "2. ОАиП \n";
            std::cout << "3. КЯР \n";
            std::cout << "-------------------------------------\n";
            break;
        case 2:
            std::cout << "-------------------------------------\n";
            std::cout << "Вторник \n";
            std::cout << "1. ОАиП \n";
            std::cout << "2. ОАиП \n";
            std::cout << "3. ЛинАиАналГеом \n";
            std::cout << "-------------------------------------\n";
            break;
        case 3:
            std::cout << "-------------------------------------\n";
            std::cout << "Среда  \n";
            std::cout << "1. АЛОВС \n";
            std::cout << "2. Физра \n";
            std::cout << "3. МатАн \n";
            std::cout << "-------------------------------------\n";
            break;
        case 4:
            std::cout << "-------------------------------------\n";
            std::cout << "Четверг \n";
            std::cout << "1. ТРПО \n";
            std::cout << "2. ТРПО \n";
            std::cout << "-------------------------------------\n";
            break;
        case 5:
            std::cout << "-------------------------------------\n";
            std::cout << "2. СЯП \n";
            std::cout << "3. МатАн \n";
            std::cout << "-------------------------------------\n";
            break;
        case 6:
            std::cout << "-------------------------------------\n";
            std::cout << "1. МатАн \n";
            std::cout << "2. Физра \n";
            std::cout << "3. КЯР \n";
            std::cout << "4. Англ \n";
            std::cout << "-------------------------------------\n";
            break;
        default:
            break;
        }
        std::cout << "Желаете продолжить? 1 - да";
        std::cin >> vibor;
    } while (vibor == 1);
}