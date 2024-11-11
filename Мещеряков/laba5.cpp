#include <iostream>
using namespace std;
int main() {
	int rows, columns;
	cout << "Vvedite kol-vo strok: "; cin >> rows;
	cout << "Vvedite kol-vo stolbcov: "; cin >> columns;
	double** arr = new double* [rows]{};
	double* max= new double[columns]{};
	for (int i = 0; i < rows; i++) {
		arr[i] = new double[columns] {};
	}
	cout << "Vvedite elmenty massiva: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << "[" << i + 1 << "]";
			cout << "[" << j + 1 << "]";
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (arr[j][i] > max[i]) {
				max[i] = arr[j][i];
			}
		}
	}
	double min = max[0];
	for (int i = 0; i < columns; i++) {
		if (max[i] < min) {
			min = max[i];
		}
	}
	cout << "Minimalny iz maksimalnych " << min;
	for (int i=0;i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	delete[] max;
	return 0;
}
