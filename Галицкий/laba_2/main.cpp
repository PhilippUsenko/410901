#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");
    int x, y, z, t;
    cout << "Введите три числа: ";
    cin >> x >> y >> z;
    if (x > y) {
        t = x;
        x = y;
        y = t;
    }
    if (x > z) {
        t = x;
        x = z;
        z = t;
    }
    if (y > z) {
        t = y;
        y = z;
        z = t;
    }
    cout << "Числа в порядке возрастания: " << x << " " << y << " " << z << endl;
    return 0;
}
