#include <iostream>
using namespace std;

//инициализация переменных
float number1, number2;
float difference, multiplication, quotient;


float input_float_number(){
	float num;
	while (true){
		if (cin >> num) { // если ввели число
			return num; // функция возвращает это число
		}
		else{
			cout << "Incorrect input, try again\n"; //Вывод надписи на экран
			cin.clear(); //очистка консоли
			cin.ignore(1000,'\n'); //пропускает прошлый ввод
		}
	}
}

int main() {
	cout << "Enter the first number: " << endl; //Вывод надписи на экран
	number1 = input_float_number(); //получение числа из функции

	cout << "Enter the second number: " << endl;
	number2 = input_float_number();

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
