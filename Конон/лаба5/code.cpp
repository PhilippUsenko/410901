#include<iostream>

using namespace std;

int main() {
	int s = 0;

	setlocale(LC_ALL, "RU");
	int** arr = new int*[5];
	for (int i = 0; i < 5; i++) {
		arr[i] = new int[5];
	}
	cout << "Заполните массив размером 5 на 5:"<< endl;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "Введите элемент "<<i+1 <<" строки " <<j+1 << " столбца:";
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j += 2) {
			s += arr[i][j];
		}
	}
	cout << "Сумма элементов, находящихся в нечетных слолбцах, равна: " << s;
	for (int i = 0; i < 5; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}
