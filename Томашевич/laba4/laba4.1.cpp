#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int c, sum=0;
	cout << "������� ����� c: "; cin >> c;
	int arr[10];
	for (int i = 0; i < 10; i++) {
		cout << "������� " << i + 1 << " ������� ������� ";
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++) {
		if (arr[i] < 0) {
			sum += arr[i];
		}
	}
	if (sum < c) {
		cout << "����� ������������� ��������� ������� ������ " << c << " � ����� " << sum << endl;
	}
	if (sum > c) {
		cout << "����� ������������� ��������� ������� ������ " << c << " � ����� " << sum << endl;
	}
	if (sum == c) {

		cout << "����� ������������� ��������� ������� ����� " << c << endl;
	}
	return 0;
}