#include <iostream>
#include <locale.h>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Введите целое n\n";

    int n;

    float x = 0;

    while (!(std::cin >> n))
    {
        std::cout << "Некорректный ввод\n";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    for (int i = 1; i <= n; i++)
    {
        x += (pow(-1, i) * (i + 1)) / (i);
    }

    std::cout << "Для n = " << n << ", " << "x = " << x << std::endl;

    return 0;
}
