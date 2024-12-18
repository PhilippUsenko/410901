#include <iostream>
using namespace std;

//В одномерном массиве, состоящем из n вещественных элементов, 
//вычислить сумму отрицательных элементов массива и сравнить с введенным значением С.

int main() {
	const int n = 3;
	int array[n]{ 5,-4,2 };

	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (array[i] < 0) sum += array[i];
	}

	cout << "Sum of negative elements: " << sum << "\n\n";

	int C;
	cout << "Enter a number to compare: ";
	cin >> C;

	if (sum > C) cout << "sum > C" << "\n\n";
	else if (sum < C) cout << "sum < C" << "\n\n";
	else cout << "sum = C" << "\n\n";

    //Дан двумерный массив 5 * 5. Заменить нулем элементы,
    //расположенные под главной диагональю
    const int n2 = 3;
    int array2[5][5]{
      {1,2,3,4,5},
      {6,7,8,9,0},
      {1,2,3,4,5},
      {6,7,8,9,0},
      {1,2,3,4,5}
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            array2[i][j] = 0;
        }
    }

    cout << "Modified matrix: " << "\n";

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array2[i][j] << " ";
        }
        cout << "\n";
    }

}