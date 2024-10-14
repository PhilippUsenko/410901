#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n;
	double x,b,result;
	cin >> n >> x;
	result = 1;
	for (int i = 1; i <= n; i++)
	{
		b = double(i) / (i + 1) + pow(tan(fabs(x + i)), i);
		result *= b;
	}
	cout << result;
	return 0;
}
