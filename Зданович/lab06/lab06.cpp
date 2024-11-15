#include <iostream>
#include <string>
using namespace std;
int main() {
	string firstString;
	string secondString;
	cout << "Enter the first string.";
	cin >> firstString;
	cout << "Enter the second string.";
	cin >> secondString;
	string &shorterString = (firstString.length() < secondString.length()) ? firstString : secondString;
	for (int i = 0; i < shorterString.length() -1; i++) {
		for (int j = 0; j < shorterString.length() - i -1; j++) {
			if (shorterString[j] > shorterString[j + 1]) {
				char temporaryBox = shorterString[j];
				shorterString[j] = shorterString[j + 1];
				shorterString[j+1] = temporaryBox;
			}
		}
	}
	cout << "sorted string : " << shorterString;
	return 0;
}
