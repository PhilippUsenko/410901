#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "������� �����:" << std::endl;

    int input;

    while (!(std::cin >> input))
    {
        std::cout << "������� ������������ ��������" << std::endl;
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    if (input % 2 == 0 && input >= 10 && input <= 99)
    {
        std::cout << "������ ����� ����� �������� ������ ���������� ������" << std::endl;
    }
    else
    {
        std::cout << "������ ����� ����� �� �������� ������ ���������� ������" << std::endl;
    }
}