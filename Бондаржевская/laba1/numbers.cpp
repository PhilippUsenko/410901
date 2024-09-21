#include <iostream>

using namespace std;

int main()
{
	float a, b;

	cout << "First number: ";
	cin >> a;
	if (!cin)
	{
		cout << "Invalid input";
		return 1;
	}

	cout << "Second number: ";
	cin >> b;
	if (!cin)
	{
		cout << "Invalid input";
		return 1;
	}

	cout << "The arithmetic mean of the squares of the given numbers: " << (a * a + b * b) / 2 << "\n";

	cout << "The arithmetic mean of the moduli of the given numbers: " << (abs(a) + abs(b)) / 2;

	system("pause>nul");

	return 0;
}
