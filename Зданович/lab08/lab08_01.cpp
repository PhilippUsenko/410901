#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void divEleven(int a) {
	int oddNums = 0, evenNums = 0, diffBtwNums;
	string numStr = to_string(a);
	int* array = new int[numStr.length()];
	for (int i = 0; i < numStr.length(); i++) {
		array[i] = numStr[i];
	}
	for (int i = 0; i < numStr.length(); i += 2) {
		oddNums = oddNums + array[i];
	}
	for (int i = 1; i < numStr.length(); i += 2) {
		evenNums = evenNums + array[i];
	}
	diffBtwNums = abs(evenNums - oddNums);
	if (diffBtwNums == 0 || diffBtwNums % 11 == 0) {
		cout << "this number is divisible by 11 without remainder" << endl << "+ + + + + + + + + + + + + + + + + + + + +";
	}
	else {
		cout << "this number is  not divisible by 11 without remainder" << endl << "- - - - - - - - - - - - - - - - - -";
	}
}
int main() {
	int num;
    cin >> num;
	divEleven(num);
	return 0;
}
