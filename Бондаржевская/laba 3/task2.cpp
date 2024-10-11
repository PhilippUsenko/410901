#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double n = 1;
	double s = 0, b = 1;

	while ((abs(s - b)) > 0.0001)
	{
		b = s;
		s = s + pow(-1, n + 1) * (1/ n);
		n = n + 1;
	}
	cout << "Answer: " << s;
	return 0;
}