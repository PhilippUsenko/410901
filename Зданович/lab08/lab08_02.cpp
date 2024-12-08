#include <iostream>
#include <math.h>
using namespace std;

void numInPowerOf() {
	double finalNum = 1, expectedNum;
	int powerOfNum;
	cin >> expectedNum;
	if (floor(expectedNum) != expectedNum) {
		cout << "this number is not integer";
	}
	if (floor(expectedNum) == expectedNum) {
		cin >> powerOfNum;
		for (int i = 0; i < powerOfNum; i++) {
			finalNum = expectedNum * finalNum;
		}
		cout << finalNum;;
	}
}

double nRoot(double numForRoot) {
	double n, finalAns;
	cout << "Enter the power of the root: " << endl;
	cin >> n;
	double k = 1 / n;
	finalAns = pow(numForRoot, k);
	return finalAns;
}
int main() {
	int variety;
	cout << "choose between 1st and 2nd tasks: " << endl;
	cin >> variety;
	if (variety == 1) {
		numInPowerOf();
	}
	if (variety == 0) {
		double Answer;
		double numForRoot;
		cout << "Enter the number you want to take the root of" << endl;
		cin >> numForRoot;
		Answer = nRoot(numForRoot);
		cout << Answer;
	}
	else cout << "There is no such option";

	return 0;
}
