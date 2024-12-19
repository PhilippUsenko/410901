#include <iostream>
using namespace std;
int main()
{
    int x, y, ammount = 0;
    cin >> x >> y;
    int** array = new int* [x];
    for (int i = 0; i < x; ++i) {
        array[i] = new int[y];
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            int d;
            cin >> d;
            array[i][j] = d;
        }
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (array[i][j] < 0) {
                ammount++;
                j = y;
            }
        }
    }
    cout << ammount;
    for (int g = 0; g < x; g++) {
        delete[] array[g];
    }
    delete[] array;
    return 0;
}
