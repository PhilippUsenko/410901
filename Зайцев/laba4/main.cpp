#include <iostream>
#include <math.h>
using namespace std;
int main() {
	float arr[100], x, sum;
	int n, k;
	sum = 0;
	k = 0;
	x = 0;
	cout << "Enter number of elements<=100 ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];
	}
	x = arr[0];
	for (int i = 0; i < n; i++) {
		if (x > arr[i]) {
			x = arr[i];
		}
	}

	cout << "The lowest value: " << x << endl;
	while (!(arr[k] == x)) {
		sum += abs(arr[k]);
		k++;
	}
	cout << "Sum: " << sum;
	return 0;
}
