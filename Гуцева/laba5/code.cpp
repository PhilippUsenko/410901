#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int row;
    int col;

    cout << "Введите количество строк" << endl;
    cin >> row;

    cout << "Введите количество столбцов" << endl;
    cin >> col;

    int** arr = new int* [row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
 

    cout << "Заполните массив" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }


    cout << "Массив:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }


    cout << "Сумма элементов каждой строки:" << endl;
    for (int i = 0; i < row; i++)
    {
        int summa = 0;

        for (int j = 0; j < col; j++)
        {
            summa += arr[i][j];
        }
        cout << summa << endl;
    }


    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
    return 0;
}
