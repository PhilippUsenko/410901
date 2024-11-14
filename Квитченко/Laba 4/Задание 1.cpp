#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
     const int n = 8;
     int numbers[ n ];
     int i=0;
     cout << "Вводим массив: " << endl << "----------" << endl;
    for (i = 0; i < n; i++) {
         cin >> numbers[i];
    }
    cout << "--------------" << endl;
    cout << "Выводим массив : " << endl << "---------" << endl;
    for (i = 0; i < n; i++) {
        cout << numbers[i] << endl << "------------" << endl;
    }
    int min, last, counterMIN, counterLast;
    counterMIN = 0;
    min = numbers[counterMIN];
    counterLast = n - 1;
    last = numbers[counterLast];
    for (  i = 0; i < n; i++) 
    {
        if (min >= numbers[i]) { min = numbers[i]; counterMIN = i; }
    }
    numbers[counterLast] = min;
    numbers[counterMIN] = last;

    cout << "Выводим изменёный массив :" << endl << "---------" << endl;

    for ( i = 0; i < n; i++)
    {
        cout <<  numbers[i] << endl << "------------" << endl;
    }
    return 0;
}