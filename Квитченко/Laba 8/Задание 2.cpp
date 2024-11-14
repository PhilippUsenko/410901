#include <iostream>s
#include <string>
using namespace std;

int cheslo(int n ,const int arr[]) {
	int max = arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] > max) {
				max = arr[i];
			}
		}
		return max;
}
int stringda(string text) {
	int n = text.length();
	int maxstring = 0;
	int full = 0;
	for (int i = 0; i < n; i++) {
		if (i == n - 1 || text[i] == ' ') {
			if (i == n - 1 && text[i] != ' ') {
				full++;
			}
			else if (full > maxstring)
			{
				maxstring = full;
			}
			full = 0;

		}
		else {
				full++;
		}
	
	}
	return maxstring;
}



int main() {
	setlocale(LC_ALL, "Russian");
	const int N = 5;
	int maxmassif;
	int numbers[N];
	cout << "¬ведите числа: ";
	for (int i = 0; i < N; i++) {
		cin >> numbers[i];
	}
	maxmassif = cheslo(N, numbers);
	cout << maxmassif << endl;
	cout << "-------------------" << endl;

	cin.ignore();

	string text;
	getline(cin, text);
	int slovomax = stringda(text);
	cout << slovomax;
	return 0;
}