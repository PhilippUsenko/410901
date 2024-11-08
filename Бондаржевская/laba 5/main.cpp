//Дан двумерный массив целых чисел. Найти произведение максимального и минимального элементов.

#include <iostream>
using namespace std;

int main()
{
	int row,col;
	cout << "Enter the number of rows:\n";
	cin >> row;
	cout << "Enter the number of cells:\n";
	cin >> col;

	int** numbers = new int* [row];
	for (int i = 0; i < row; i++)
	{
		numbers[i] = new int[col];
	}
	
	cout << "Enter " << row*col <<" numbers: " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			
			cin >> numbers[i][j];
		}
	}

	int min = numbers[0][0];
	int max = numbers[0][0];

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (numbers[i][j] > max)
				max = numbers[i][j];
			if (numbers[i][j] < min)
				min = numbers[i][j];
		}
	}

	cout << "Maximum " << max << endl;
	cout << "Minimum " << min << endl;
	cout << "Product " << max * min << endl;

	for (int i = 0; i < row; i++)
	{
		delete[] numbers[i];
	}
	delete[] numbers;

	return 0;
}