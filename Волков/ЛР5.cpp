#include <iostream>
//Среднее арифметическое двумерного массива
int main()
{
	int rows, cols;
	std::cout << "Write the number of rows in the massive" << '\n';
	std::cin >> rows;
	std::cout << "Write the number of columns in the massive" << '\n';
	std::cin >> cols;

	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << "Write the elements of the massive" << '\n';
			std::cin >> arr[i][j];
		}
	}
	//////////////////////////////////////////////////////////////////
	double sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
	}

	std::cout << "The answer is" << '\n' << sum / (rows * cols);

	//////////////////////////////////////////////////////////////////
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}