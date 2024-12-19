#include <iostream>
using namespace std;


float Sum(float a, float b) 
{
    return a + b;
}

int NOD(int num, int denom) 
{
    int remain = num;
    while (remain = denom % num) 
    {
        denom = num;
        num = remain;
    }
    return num;
} 

void Sum(int m1, int n1, int m2, int n2) 
{
 
    int m3 = m1 * n2 + m2 * n1; 
    int n3 = n1 * n2;         

    int nod = NOD(m3, n3);
    m3 /= nod;
    n3 /= nod;

    cout << m3 << "/" << n3 << endl;
}

int main() {
    setlocale(LC_ALL, "ru");

    float a, b;
    int m1, n1, m2, n2;

    cout << "Задайте две десятичные дроби:" << endl;
    cout << "Введите первое число:" << endl;
    cin >> a;

    cout << "Введите второе число:" << endl;
    cin >> b;

    cout << "Сумма десятичных дробей:" << endl;
    cout << a << " + " << b << " = " << Sum(a, b) << endl;
 
    cout << "Введите числитель и знаменатель первой дроби:" << endl;
    cin >> m1 >> n1;

    cout << "Введите числитель и знаменатель второй дроби:" << endl;
    cin >> m2 >> n2;

    cout << "Сумма обыкновенных дробей:" << endl;
    cout << m1 << "/" << n1 << " + " << m2 << "/" << n2 << " = ";
    Sum(m1, n1, m2, n2);

    return 0;
}
