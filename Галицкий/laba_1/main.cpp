#include <iostream>
#include <cmath>

int main() {
    double a, b;
    cout << "katet1 (a): ";
    //Вводим первый катет
    cin >> a;
    cout << "katet2 (b): ";
    //Вводим второй катет
    cin >> b;

    // Вычисление гипотенузы
    double c = sqrt(a * a + b * b);

    // Вычисление периметра
    double perimeter = a + b + c;

    // Вычисление площади
    double area = (a * b) / 2;

    //Вывод в консоль ответ на задачу
    cout << "Pepimetr: " << perimeter << endl;
    cout << "Ploshad: " << area << endl;

    return 0;
}
