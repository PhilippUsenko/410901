#include <iostream>
using namespace std;
int main()
{
    const int n = 100;
    const int m = 100;
    int arr[n][m];
    double arr2[n][m];
    int mini;
    int stroka, stolbec;
    cout << "Введите количество строк в массиве: ";
    cin >> stroka;
    cout << endl;
    cout << "Введите количество столбцов в массиве: ";
    cin >> stolbec;
    cout << endl;
    for(int i = 0; i< stroka; i++)      //цикл для заполнения массива
    {
        for(int j = 0; j <stolbec; j++)
        {

            cout << "Введите элемент массива " << i << "-ой строки " << j << "-ого столбца: ";
            cin >> arr[i][j];
            cout << endl;
            if(!i && !j)
                {
                    mini = arr[0][0];
                }
            if(mini > arr[i][j])
            {
                mini = arr[i][j];
            }
        }

    }

    if(!mini)
    {
        cout << "Наименьший элемент массива равен 0";
        return 1;
    }

    for(int i = 0; i< stroka; i++)      // Цикл для заполнения второго массива и его вывода
    {
        for(int j = 0; j <stolbec; j++)
        {
            arr2[i][j] = (double)arr[i][j]/mini;
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

}