#include <iostream>
using namespace std;
int main() {
	int arr[4][4];
	int Ammount = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++) {
			int t = 0;
			cin >> t;
			arr[i][j] = t;
		}
	}
	for (int f = 0; f < 4; f++)
	{
		for (int k = 0; k < 4; k++) {
			if (arr[f][k] < 0) {
				k = 5;
				Ammount++;
			}
		}
	}
	cout << Ammount;
	return 0;
}
