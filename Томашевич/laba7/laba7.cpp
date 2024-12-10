#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    string name;  // ���
    int group;    // ����� ������
    double grade; // ������� ����
    int income;   // ����� �� ����� �����
};

int main() {
    setlocale(LC_ALL, "Ru");
    const int minincome = 1252; // ��� ����������� ��������
    const int quantity = 5;    // ���������� ���������

    // ������������ ������ ���������
    Student* students = new Student[quantity]{
        {"������ ������ ����������", 1, 9.3, 1700},
        {"������� ���� ����������", 2, 8.2, 500},
        {"������� ������� ��������", 3, 7.9, 1500},
        {"�������� ���� ����������", 4, 6.8, 990},
        {"�������� ������ ����������", 5, 10.0, 1100}
    };

    // ���������� ���������
    // ����������� ��������� � ������ ������� � ������ �������
    int lowincomecount = 0;
    for (int i = 0; i < quantity; i++) {
        if (students[i].income < minincome) {
            swap(students[i], students[lowincomecount]);
            lowincomecount++;
        }
    }

    // ���������� ��������� ��������� �� �������� �������� �����
    for (int i = lowincomecount; i < quantity - 1; i++) {
        for (int j = i + 1; j < quantity; j++) {
            if (students[i].grade < students[j].grade) {
                swap(students[i], students[j]);
            }
        }
    }

    // ����� ��������� �� �������
    cout << "����������� �������������� ���� � ���������:\n";
    for (int i = 0; i < quantity; i++) {
        cout << "�.�.�.: " << students[i].name << "\n"
            << "������: " << students[i].group << "\n"
            << "������� ����: " << students[i].grade << "\n"
            << "����� �� ����� �����: " << students[i].income << "\n\n";
    }

    // ������ ��������� � ����
    ofstream file("list.txt");
        for (int i = 0; i < quantity; i++) {
            file << "�.�.�.: " << students[i].name << "\n"
                << "������: " << students[i].group << "\n"
                << "������� ����: " << students[i].grade << "\n"
                << "����� �� ����� �����: " << students[i].income << "\n\n";
        }
        file.close();

    delete[] students;

    return 0;
}
