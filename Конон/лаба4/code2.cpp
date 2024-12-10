#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int s=0;
	int const a = 5; 
	int const b = 5;

	setlocale(LC_ALL, "RU");

	int arr[a][b] = {
		{1, 2, 3, 5 ,7},
		{2, 4, 1, 5, 9},
		{10, 23, 5, 7, 19},
		{8, 11, 17, 52, 4},
		{0, 2, 4, 13, 7}
	};

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < b; j += 2) {
			s += arr[i][j];
		}
	}
	cout << "Сумма элементов, находящихся в нечетных слолбцах, равна: " << s;
}
