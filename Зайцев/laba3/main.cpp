#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x, finishValue;
	int n;
	cin >> n >> x;
          if (n <= 0) {
	          cout << "Error";
	          return 0;
          }
	finishValue = 1;
	for (int i = n; i > 0; i--) {
		finishValue *= (double(n) / (n + 1)) - (pow(cos(fabs(x)), n));
		n--;
	}
	cout << finishValue << '\n';
	return 0;
}
