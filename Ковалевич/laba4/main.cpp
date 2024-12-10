#include <iostream>
#include <ctime>
#include <clocale> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL)); 
    int n;
    cout << "Введите длину массива: ";
    cin >> n;

    if (n >= 0 && n <= 100) {
        cout << "Число входит в диапазон" << endl;
       int arr[n];

        for (int j = 0; j < n; j++) { 
            arr[j] = rand() % 41 - 30; 
            cout << arr[j] << endl; 
        }

        for (int k = 0; k < n; k += 2) {
            arr[k] = 0;
        }

        for (int l = 1; l < n; l += 2) {
            arr[l] = 1;
        }
        for (int i=0; i<n; i++)
        cout << arr[i];
    } else {
        cout << "Число не входит в диапазон" << endl;
    }


    return 0;
}
