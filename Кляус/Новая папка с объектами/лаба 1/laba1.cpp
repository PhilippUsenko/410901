#include <iostream>
#include <math.h>
using namespace std;
int main()
{	
	double M_Pi = 3.14159265358979323846;
	double degree;
	double rad;
	double z1, z2;
	cout << "Введите величину в градусах: ";
	cin >> degree;
		rad = degree * M_PI / 180;
		int degr = (int)degree % 360;

	if ((int)degree % 180 == 0)
	{
		cout << "При данных значениях угла невозможно выполнить программу." << "\n";
		return 1;
	}
	if ((int)degree % 90 == 0)	
	{
		cout << "Решением является: 0" << "\n";
		return 0;
	}
	rad = degree * M_Pi / 180;
	z1 = abs(sqrt(1 - pow(sin(rad), 2)) / sin(rad));
	z2 = abs(cos(rad) / sqrt(1 - pow(cos(rad), 2)));
	if ((int)(abs(z1) * 1000) == (int)(abs(z2) * 1000))
	{
		if ((degr > 0 && degr < 90) || (degr < 270 && degr > 180))
			z1 = z1;
		else
			z1 = -z1;
	}
	else return 1;
	cout << "Решением является: " << z1 << endl;


	return 0;
}