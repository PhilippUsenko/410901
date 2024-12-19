#include <iostream>
using namespace std;
#include <sstream> 

// ������� ��������, �������� �� ����� ����� ��� ���������� �����
bool hasExactlyTwoSameDigits(const string& number) {
    int digitCount[10] = { 0 }; // ������ ��� �������� ���������� ������ �����

    // ������������ ���������� ������ �����
    for (char digit : number) {
        digitCount[digit - '0']++;
    }

    // ������������ ���������� ����, ������� ����������� ������
    int pairs = 0;
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] == 2) {
            pairs++;
        }
    }

    // ���� ����� ��� ���������� �����, ������ ���� ���� ���� � ��������� ����� ���������
    return pairs == 1;
}

// �������� �������
int countValidCarNumbers() {
    int count = 0;

    // ���������� ��� �������������� ������
    for (int i = 1000; i <= 9999; i++) {
        string number = to_string(i); // ����������� ����� � ������
        if (hasExactlyTwoSameDigits(number)) {
            count++;
        }
    }

    return count;
}

int main() {
    setlocale(LC_ALL, "Ru");
    int result = countValidCarNumbers();
    cout << "���������� ������� ����� � ����� ����� ����������� �������: " << result << endl;
    return 0;
}