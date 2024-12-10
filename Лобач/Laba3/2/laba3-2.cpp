#include <iostream>
#include <locale.h>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Hello world" << std::endl;

    float res = 0;

    int n = 0;

    while (n < 100) {
        res += ((pow(-1, n) / pow(n + 1, n)));

        n++;
    }

    std::cout << "Result: " << round(res * 1000) / 1000 << std::endl;
}