//лаба 8 задание 1
#include <iostream>
#include <string>

using namespace std;

void multiply(int P){
	int sum = 0;
	string b, str = to_string(P);
	for (int i = 0; i < size(str); i++) {
		b = str[i];
		sum += stoi(b);
	}
	if (sum % 3 == 0) {
		cout << "Number multiply to 3 ";
	}
	else {
		cout << "Number dont multiply to 3 ";
	}

}
int main() {
	int P;
		cout << "Enter P : ";
		cin >> P;
	multiply(P);
}
