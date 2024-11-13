#include <iostream>

//Двумерные массивы.Найти среднее арифметическое элементов двумерного массива.

int main() {
	double arr[100][100];
	int rows, columns;


	std::cout << "Write number of rows" << '\n';
	std::cin >> rows;
	if (rows > 100) {
		std::cout << "Error: rows > 100";
		return 1;
	}
	std::cout << "Write number of columns" << '\n';
	std::cin >> columns;
	if (columns > 100) {
		std::cout << "Error: columns > 100";
		return 1;
	}


	for (int i = 0; i < rows; i++) {
		for (int n = 0; n < columns; n++) {
			std::cout << "Write " << n <<  " elements of the massive" << '\n';
			std::cin >> arr[i][n];
			std::cout << arr[i][n];
		}
	}

	double sum = 0;
	for (int i = 0; i < rows; i++) {
		for (int n = 0; n < columns; n++) {
			sum += arr[i][n];
		}
	}

	std::cout << "Answer is " << sum / (rows * columns);
	return 0;
}