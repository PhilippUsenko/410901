#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int rows = 5;
	int columns = 5;
	int** array{ new int* [rows] {} }; 
		for (int i{}; i < rows; i++)
		{
			array[i] = new int[columns] {};
		}


		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++)
			{
				array[i][j] = rand() % 10;
				cout << array[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (i + j < 4)
					array[i][j] = 0;
			}
		}


		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++)
			{
				cout << array[i][j] << " ";
			}
			cout << endl;
		}

		for (int i{}; i < rows; i++){
				delete[] array[i];
		}
				delete[] array;

	return 0;
}
