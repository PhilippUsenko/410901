#include <iostream>
#include <ctime>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int p;
    p = 1;

   int rows = 5;
    int columns = 5;

    int **arr = new int *[rows];
    for (int i=0; i < rows; i++)
    {
        arr[i] = new int[columns];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = rand() % 21 - 10;
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i][0] < 0)
        {
            for (int j = 0; j < 5; j++)
            {
                p *= arr[i][j];
            }
        }
    }
    cout << p;
    for (int i=0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
