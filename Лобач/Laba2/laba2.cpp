#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Введите число:" << std::endl;

    int input;

    while (!(std::cin >> input))
    {
        std::cout << "Введено некорректное значение" << std::endl;
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    if (input % 2 == 0 && input >= 10 && input <= 99)
    {
        std::cout << "Данное целое число является четным двузначным числом" << std::endl;
    }
    else
    {
        std::cout << "Данное целое число не является четным двузначным числом" << std::endl;
    }
}