#include <iostream>
using namespace std;
#include <sstream> 

// Функция проверки, содержит ли номер ровно две одинаковые цифры
bool hasExactlyTwoSameDigits(const string& number) {
    int digitCount[10] = { 0 }; // Массив для подсчета количества каждой цифры

    // Подсчитываем количество каждой цифры
    for (char digit : number) {
        digitCount[digit - '0']++;
    }

    // Подсчитываем количество цифр, которые встречаются дважды
    int pairs = 0;
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] == 2) {
            pairs++;
        }
    }

    // Если ровно две одинаковые цифры, значит есть одна пара и остальные цифры уникальны
    return pairs == 1;
}

// Основная функция
int countValidCarNumbers() {
    int count = 0;

    // Перебираем все четырехзначные номера
    for (int i = 1000; i <= 9999; i++) {
        string number = to_string(i); // Преобразуем число в строку
        if (hasExactlyTwoSameDigits(number)) {
            count++;
        }
    }

    return count;
}

int main() {
    setlocale(LC_ALL, "Ru");
    int result = countValidCarNumbers();
    cout << "Количество номеров машин с ровно двумя одинаковыми цифрами: " << result << endl;
    return 0;
}