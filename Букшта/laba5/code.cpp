#include <iostream>
using namespace std;

int main() {
    int s;
    int t;
    cout << "введите кол-во строк массива\n";
    cin >> s;
    cout << "введите кол-во столбцов массива\n";
    cin >> t;
    int** m = new int* [s];

    cout << "введите элементы массива\n";
    for (int i = 0; i < s; i++) {
        m[i] = new int[t];
    }

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < t; j++) {
            cin >> m[i][j];
        }
    }

    int answer = 0, answ = 1;
    for (int j = 0; j < t; j++) {
        cout << endl;
        for (int i = 0; i < s; i++) {
            answer += m[i][j];
        }
        cout << "Сумма элементов " << answ << "-го столбца равна " << answer << endl;
        answer = 0;
        answ++;
    }

    for (int i = 0; i < s; i++) {
        delete[] m[i];
    }
    delete[] m;
    return 0;
}
