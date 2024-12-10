#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int n, x = 0, sum = 0;
	cout << "Vvedite stroky: ";
	getline(cin, s);
	n = size(s);
	for (int i = 0; i < n; i++) {
		if (s[i] == ' ') { sum++; };
	}
	int j = 0;
	string* a = new string[sum+1]{};
	for (int i = 0; i < n; i++) {
		if (s[i] == ' ') {
			for (x; x < i; x++) {
				a[j] += s[x];
			}
			j++;
			x = i + 1;
		}
	}
	for (x; x < n; x++) {
		a[j] += s[x];
	}

	int min, b = 0;
	min = size(a[0]);
	for (int i = 0; i < sum + 1; i++) {
		if (size(a[i]) < min) {
			min = size(a[i]);
			b = i;
		}
	}

	cout << a[b];
	delete[] a;
	return 0;
}
