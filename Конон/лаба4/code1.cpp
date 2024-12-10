#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int m, p, k=0;

	float arr[10];
	for (int i = 0; i < 10; i++) {
		cout << "Введите " << i + 1 << " элемент:";
		cin >> arr[i];
}
	cout << "Введите начало промежутка:";
	cin >> m;
	cout << "Введите конец промежутка:";
	cin >> p;

	for (int i = 0; i < 10; i++) {
		if (arr[i] >= m && arr[i] <= p) {
			k++;
		}
	}
	cout << "Количество элементов, входящих в промежуток, равно " << k;
}
