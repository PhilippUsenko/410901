#include <iostream>
#include <string>

using namespace std;

int main() {
  

    setlocale(LC_ALL, "RU");

    string input;
    int lowerCount = 0, upperCount = 0;

    cout << "Введите строку: ";
    getline(cin, input);

    for (char let : input) {
        if (let >= 'a' && let <= 'z') {
            lowerCount++;
        }
        else if (let >= 'A' && let <= 'Z') {
            upperCount++;
        }
    }

    cout << "Количество строчных букв: " << lowerCount << endl;
    cout << "Количество прописных букв: " << upperCount << endl;

    return 0;
}