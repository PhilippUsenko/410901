#include <iostream>
using namespace std;


int main() {
	//инициализация переменных
	float number1, number2;
	float difference, multiplication, quotient;

	cout << "Enter the first number: " << endl; //Вывод надписи на экран
	cin >> number1;

	cout << "Enter the second number: " << endl;
	cin >> number2;

	difference = number1 - number2; //подсчет переменных
	multiplication = number1 * number2;

	cout << "The difference is: " << difference << endl; //вывод переменных
	cout << "Multiplication is equal to: " << multiplication << endl;
	if (number2 != 0) { //проверка, что второе число не равно 0
		quotient = number1 / number2;
		cout << "The quotient is equal to: " << quotient << endl;
	}
	else cout << "You can't divide by zero";

	system("pause>nul");
	return 0;
}