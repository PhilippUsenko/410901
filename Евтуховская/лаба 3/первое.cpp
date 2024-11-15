#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Все трехзначные числа, состоящие только из нечетных цифр: " << endl;
	for (int i = 100; i <= 999; i++)
	{
		int s = i / 100;
		int d = (i%100)/10;
		int e = i % 100;
		if (s % 2 != 0 && d % 2 != 0 && e % 2 != 0)
		{
			cout << i << endl;
		}
	}
	return 0;
}