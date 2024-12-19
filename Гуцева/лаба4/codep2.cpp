#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int const row=4;
    int const col=3;

    int arr[row][col]{{2,4,9}, 
                    { 7,8,2 }, 
                    { 0,6,3}, 
                    { 7,2,5 } 
    };
  
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
return 0;
}
