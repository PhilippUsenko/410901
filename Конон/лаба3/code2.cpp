#include <iostream>
#define _USE_MATH_DEFINES 
#include <math.h>
#include <cmath>
using namespace std;
int l = 1;
float s = 0, v=1;

int main() {
	setlocale(LC_ALL, "RU");
	while (abs(v)>=0.001) {
		v = cos(M_PI * l) / (pow(3, l) * (l + 1));
		s += v;
		l++;
	}
	s = round(s * 1000) / 1000;
	cout << "Результат вычисления равен:" << s;
}
