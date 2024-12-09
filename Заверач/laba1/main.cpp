#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int i,a,b,c;
	for (i = 100;i < 1000;i++) {
		a = i / 100;
		b = i / 10;
		c = i % 10;
		if ((a != b) && (a != c) && (b != c))
			cout << i << endl;
								}


	return 0;
}


