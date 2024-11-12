#include <iostream>
using namespace std;

int operations_with_numbers(int num) { //функция производит операцию над числом
	if (num == 0) return 0;
	else if (num < 0) return num*num;
	else if (num > 0) return num*num*num;
}

int main() {
	int number1, number2, number3;

	cout << "Enter the first number: " << endl;
	cin >> number1;

	cout << "Enter the second number: " << endl;
	cin >> number2;

	cout << "Enter the third number: " << endl;
	cin >> number3;


	number1 = operations_with_numbers(number1);
	number2 = operations_with_numbers(number2);
	number3 = operations_with_numbers(number3);

	
	cout << "\n" << "The first number: " << number1 << endl;
	cout << "The second number: " << number2 << endl;
	cout << "The third number: " << number3 << endl;


	system("pause>nul");
	return 0;
}
