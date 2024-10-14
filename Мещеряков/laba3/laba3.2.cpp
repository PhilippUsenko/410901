#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n;
	double result;
	n = 1;
	result = 0;
	while (n <= 1000) {
		result += pow((-1), n) * 1.0 / (pow(n, 3) * (n + 3));
		n++;
	}
	
	cout << round(result*100)/100;
	return 0;
}
