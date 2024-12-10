#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");

    float x, f;
    cout << "Введите значение x: ";
    cin >> x;
    cout << "---------------------" << endl;
    if (x <= 0)
    {
        f = -1;
    }
    else if ( x >= 2){
        f = 4;
    }
    else {
        f = x * x;
    }
    cout << "Значение функции f(x): " << f;
    return 0;
}