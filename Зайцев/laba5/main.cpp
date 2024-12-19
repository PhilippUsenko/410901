#include <iostream>
using namespace std;
int main(){
    int rows, columns,m;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << endl << "Enter number of columns: ";
    cin >> columns;
    int** numbers{ new int* [rows] {} };
    //создаем массивы столбцов в двухмерном
    for (int i = 0; i < rows; i++) 
    {
        numbers[i] = new int[columns] {};
    }
    //заполняем элементами
    for (int i = 0; i < rows; i++) 
    {
        cout << "[" << i + 1 << "]" << ": ";
        for (int j = 0; j < columns; j++) {
            cout << "[" << j + 1 << "]" << ": ";
            cin >> numbers[i][j];

        }
    }
    m = numbers[0][0];
    //ищем наименьший элемент
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) {
            if (numbers[i][j] < m) {
                m = numbers[i][j];
            }
        }
    }
    //вывод нового массива
    cout << "New array";
    for (int i = 0; i < rows; i++) 
    {
        cout << endl;
        for (int j = 0; j < columns; j++) {
            cout << double(numbers[i][j]) / m << " ";
        }
    }
    //удаление массива
    for (int i = 0; i < rows; i++)
    {
        delete[] numbers[i];
        numbers[i] = nullptr;

    }
    delete[] numbers;
    numbers = nullptr;
    return 0;
    }
