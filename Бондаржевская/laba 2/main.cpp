#include <iostream>

using namespace std;

int main()
{
	float a, b, c;
	float max = 0;

	cout << "Enter three numbers:\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	if (a > b)
	{
		if (a > c)
		{
			max = a;
		}
		else
		{
			max = c;
		}
	}
	else
	{
		if (b > c)
		{
			max = b;
		}
		else
		{
			max = c;
		}
	}

	cout << "Max = " << max;

	return 0;
}