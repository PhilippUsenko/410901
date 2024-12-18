#include <iostream>
#include <string> 
using namespace std;

//Ввести строку.Удалить все повторяющиеся символы и вывести
//результат на экран.


int main() {
	string symbols;

	cout << "Enter string: " << endl;

	getline(cin, symbols);

	for (int i = 0; i < size(symbols); i++) {
		bool repeat = false;
		for (int j = i+1; j < size(symbols); j++) {
			if (symbols[i] == symbols[j]) {
				symbols.erase(j, 1);
				repeat = true;
				if (j > 0) j--;
			}
		}
		if (repeat) {
			symbols.erase(i, 1);
			i--;
		}
	}

	cout << "\n" << "String without repetitions: " << endl;
	cout << symbols;

	return 0;
}

