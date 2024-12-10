#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    const int n = 5;
    int K[n];

    cout << "Задайте 5 элементов массива" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> K[i];
    }

    int j = 0; 

    for (int i = 0; i < n; i++)
    {
        if (K[i] != 0)
        {
            K[j] = K[i];
            j++;
        }
    }

    for (int i = j; i < n; i++)
    {
        K[i] = 0;
    }

    cout << "Преобразованный массив" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << K[i] << endl;
    }

    return 0;
}
