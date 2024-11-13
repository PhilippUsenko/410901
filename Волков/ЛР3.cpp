#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	float a, b=1, i, c = 1;
	int n;
	cout << "Введите n " << endl;
	cin >> n;
	for (i = 1; i <= n; i = i + 1)
	{
		a = 2 + 1 / i;
		i = i + 1;
		if (i <= n) 
		{
		b = 2 - 1 / i;
		c = c * a * b;
		}
		else 
		{
		c = c * a * b;
		}	
	}
	cout << "Ответ выражения " << c << endl;
	return 0;
}