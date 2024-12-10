#include <iostream>
using namespace std;
int main()
{

    int stroka, stolb;
    cout << "Введите количество строк в массиве: ";
    cin >> stroka;
    cout << endl;
    cout << "Введите количество столбцов в массиве: ";
    cin >> stolb;
    cout << endl;
    int **arr1 = new int*[stroka];
    double **arr2 = new double*[stroka];
    int mini;    
    for(int i = 0; i< stroka; i++)  // Цикл для заполнения массива и поиска наименьшего числа
    {
        arr1[i] = new int[stolb];
        for(int j = 0; j <stolb; j++)
        {
            cout << "Введите элемент массива " << i << "-ой строки " << j << "-ого столбца: ";
            cin >> arr1[i][j];
            cout << endl;
            if(!i && !j)
            {
                mini = **arr1;
            }
            if(mini > arr1[i][j])
            {
                mini = arr1[i][j];
            }
        }
    }

    if(!mini)
    {
        cout << "Наименьший элемент массива равен 0";
        return 1;
    }
    for(int i = 0; i< stroka; i++)      // Цикл для заполнения второго массива и вывода в консоль его элементов
    {
        arr2[i] = new double[stolb];   
        for(int j = 0; j <stolb; j++)
        {
            arr2[i][j] = (double)arr1[i][j]/mini;
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < stroka; i++)
    {
        delete[] arr1[i];
        delete[] arr2[i];
    }
    delete[] arr1;
    delete[] arr2;

}