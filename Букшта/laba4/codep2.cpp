#include <iostream>
using namespace std;
int main() {
	const int mss = 100, mst = 100;
	int t;
	int s;
	int m[mss][ mst];
	cout << "введите кол-во строк массива\n";
	cin >> s;
	cout << "введите кол-во столбцов массива\n";
	cin >> t;
	cout << "введите элементы массива\n";
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < t; j++) {
			cin >> m[i][j];
		}
	}
	int answer = 0, answ = 1;;
	for (int j = 0; j < t; j++)
	{
		cout << endl;
		for (int i = 0; i < s; i++)
		{
			answer = answer + m[i][j];
		}
		cout << "Сумма элементов " << answ << "н-ого стобика равна " << answer << endl;
		answer = 0;
		answ++;
	}
	return 0;
}
