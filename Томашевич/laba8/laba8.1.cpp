#include<iostream>
using namespace std;
bool troika(int n) {
	for (int i = 1; i * (i + 1) * (i + 2) <= n; i++) {
		if (i * (i + 1) * (i + 2) == n) {
			return true;
		}
	}
	return false;
}
int main() {
	setlocale(LC_ALL, "RU");
	int n;
	cout << "������� ����������� �����: ";
	cin >> n;
	if (n <= 0) {
		cout << "�� ����� �� ����������� �����";
		return 1;
	}
	if (troika(n)) {
		cout << "����� " << n << " ����� ����������� � ���� ����� ��� ���������������� ����������� �����";
	}
	else {
		cout << "����� " << n << " ������ ����������� � ���� ����� ��� ���������������� ����������� �����";
	}
}