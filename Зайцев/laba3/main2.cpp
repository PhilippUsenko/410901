#include <iostream>
#include <math.h>

using namespace std;
int main() {
	float answer;
	int n = 1;
	answer = 0;
	while (n < 1000) {
		answer += pow(-1, n) * float(1) / (2 * n);
		n++;
	}
	cout << round(answer * 1000) / 1000;
	return 0;
}
