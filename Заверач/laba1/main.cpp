#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, h, bokst, alpha;
cout << "введите большее основание ";
cin >> a;
cout << "введите меньшее основание ";
cin >> b;
cout << "введите угол при большем расстоянии ";
cin >> alpha;


	h = ((a - b) / 2) / cos(alpha);
	bokst = sqrt((pow(h, 2) + pow(((a - b) / 2), 2)));
cout << "Площадь трапеции " << (a + b) / 2 * h << endl;
cout << "Периметр " << (a + b) + 2 * bokst;
return 0;
}
