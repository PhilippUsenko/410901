#include <iostream>
using namespace std;
int main() {
	int a,b,c;
	cout << "Enter 3 numbers: ";
	cin >> a >> b >> c;
	if (a == b || b == c || a == c) {
		cout << "True";
	}
	else
	{
		cout << "False";
	}
	return 0;
}
