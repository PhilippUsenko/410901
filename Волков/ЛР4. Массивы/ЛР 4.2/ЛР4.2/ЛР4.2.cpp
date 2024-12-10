#include <iostream>

//Двумерные массивы.Найти среднее арифметическое элементов двумерного массива.

int main() {
	double arr[100][100];
	int rows, columns;


	std::cout << "Write number of rows less then 100" << '\n';
	std::cin >> rows;
	std::cout << "Write number of columns less then 100" << '\n';
	std::cin >> columns;

	if (rows > 100) {
		std::cout << "error" << '\n';
		return 1;
	}
	if (columns > 100) {
		std::cout << "error" << '\n';
		return 1;
	}
	

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