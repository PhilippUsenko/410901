#include <iostream>
#include <string>
 
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	string stroka;
	cout << "Введите строку: ";
	getline(cin, stroka);

	for (int i = 0; i < stroka.length(); i++) {
		if (stroka[i] == ' ') {
			stroka[i] = '.';
		}
	}

	cout << "Замененная строка: " << stroka <<endl;
}
