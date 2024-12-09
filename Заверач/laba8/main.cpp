#include <iostream>
#include <string>
#include <cmath> 


using namespace std;

bool Palindrome(int num) {
    string s = to_string(num);
    int n = s.size();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

void Drobi(float numerator, float denominator) {
    float result = numerator / denominator;
    cout << "Десятичная из обыкновенной: " << result << endl;
}

void Drobi(double dedrob, int& numerator, int& denominator) {
    string dedrobStr = to_string(dedrob);
    size_t pointPos = dedrobStr.find('.');
    int fractionLength = dedrobStr.size() - pointPos - 1;

    denominator = pow(10, fractionLength);
    numerator = static_cast<int>(dedrob * denominator);

    int a = numerator, b = denominator;
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    int nod = a;

    numerator = numerator / nod;
    denominator = denominator /nod;

    cout << "Обыкновенная из десятичной: " << numerator << "/" << denominator << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int p;
    cout << "Введите натуральное число: ";
    cin >> p;

    if (Palindrome(p)) {
        cout << "Число  является палиндромом." << endl;
    }
    else {
        cout << "Число  не является палиндромом." << endl;
    }

    float numerator, denominator;
    cout << "Введите числитель: ";
    cin >> numerator;
    cout << "Введите знаменатель: ";
    cin >> denominator;
    Drobi(numerator, denominator);

    
    double dedrob;
    cout << "Введите десятичную дробь: ";
    cin >> dedrob;
    int num, denom;
    Drobi(dedrob, num, denom);

    return 0;
}
