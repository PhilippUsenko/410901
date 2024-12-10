#include <iostream>
#include <cmath>
using namespace std;

// Перегруженная функция для умножения вещественных чисел
double multiply(double a, double b) {
    return a * b;
}

// Перегруженная функция для умножения комплексных чисел
void multiply(double real1, double imag1, double real2, double imag2, double& resultReal, double& resultImag) {
    resultReal = real1 * real2 - imag1 * imag2; // Реальная часть
    resultImag = real1 * imag2 + imag1 * real2; // Мнимая часть
}

int main() {
    setlocale(LC_ALL, "RU");

        double real1, imag1 = 0.0; // Первое число
        double real2, imag2 = 0.0; // Второе число

        cout << "Введите первое число (если комплексное, укажите мнимую часть через пробел без i): ";
        cin >> real1;
        if (cin.peek() != '\n') { // Проверяем, есть ли ввод второй части
            cin >> imag1;
        }

        cout << "Введите второе число (если комплексное, укажите мнимую часть через пробел без i): ";
        cin >> real2;
        if (cin.peek() != '\n') { // Проверяем, есть ли ввод второй части
            cin >> imag2;
        }

        // Проверяем, являются ли числа вещественными или комплексными
        if (imag1 == 0.0 && imag2 == 0.0) {
            // Вещественные числа
            cout << "Результат умножения вещественных чисел: " << multiply(real1, real2) << endl;
        }
        else {
            // Комплексные числа
            double resultReal, resultImag;
            multiply(real1, imag1, real2, imag2, resultReal, resultImag);
            cout << "Результат умножения комплексных чисел: (" << real1 << " + " << imag1 << "i) * ("
                << real2 << " + " << imag2 << "i) = " << resultReal << " + " << resultImag << "i" << endl;
        }

    return 0;
}