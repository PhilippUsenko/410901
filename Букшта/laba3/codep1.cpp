#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	double c = 0;
	cout << "s=(-1)^(n+1)/n " <<endl;
	cout << "введите значение n=";
	cin >> n;
	if (n == 1) {
		cout << "на ноль делить нельзя" ;
	}
	else {
		for (int i = 1; i <= n; i++) {
			double t = (pow(-1, i)) / (i * (i + 1));
			c += t;}
	cout << c+1; 
	}
	return 0;
}
