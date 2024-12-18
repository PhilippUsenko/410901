#include <iostream>
using namespace std;

//Дан двумерный массив 5 * 5. Заменить нулем элементы,
//расположенные под главной диагональю

int main() {
	unsigned size = 5;
	int** array{ new int* [size] {
		new int[size] {1,2,3,4,5},
		new int[size] {6,7,8,9,0},
		new int[size] {1,2,3,4,5},
		new int[size] {6,7,8,9,0},
		new int[size] {1,2,3,4,5}
	}};


	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			array[i][j] = 0;
		}
	}

	cout << "Modified matrix: " << "\n";

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 5; j++) {
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}

	for (unsigned i{}; i < size; i++)
	{
		delete[] array[i];
	}
	delete[] array;


	return 0;
}