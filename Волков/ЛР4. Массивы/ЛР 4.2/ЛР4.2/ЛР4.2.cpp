#include <iostream>

//Двумерные массивы.Найти среднее арифметическое элементов двумерного массива.

int main() {
	double arr[10][10];
	int rows, columns;


	std::cout << "Write number of rows" << '\n';
	std::cin >> rows;
	std::cout << "Write number of columns" << '\n';
	std::cin >> columns;
	

	for (int i = 0; i < rows; i++) {
		for (int n = 0; n < columns; n++) {
			std::cout << "Write elements of the massive" << '\n';
			std::cin >> arr[i][n];
		}
	}

	double sum = 0;
	for (int i = 0; i < rows; i++) {
		for (int n = 0; n < columns; n++) {
			sum += arr[i][n];
		}
	}

	std::cout << "Answer is " << sum / (rows * columns);

}