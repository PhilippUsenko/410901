#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// ��������� ��� �������� ������ � ��������
struct Student {
    string lastName;   // �������
    string firstName;  // ���
    int age;           // �������
    int group;         // ������
};

// ������� ��������, ���������� �� ������ �� ��������� ������
bool startsWith(char c, const string& str) {
    if (str.empty()) return false;
    return str[0] == c || str[0] == (c >= 'A' && c <= 'Z' ? c + 32 : c - 32);
}

int main() {
    setlocale(LC_ALL, "RU");
    const int MAX_STUDENTS = 100; // ������������ ���������� ���������
    Student students[MAX_STUDENTS];
    int n;

    // ���� ���������� ���������
    cout << "������� ���������� ��������� (�� ����� " << MAX_STUDENTS << "): ";
    cin >> n;

    if (n <= 0 || n > MAX_STUDENTS) {
        cerr << "������������ ���������� ���������!" << endl;
        return 1;
    }

    // ���� ������ ���������
    for (int i = 0; i < n; ++i) {
        cout << "������� ������ ��� �������� #" << i + 1 << ":\n";
        cout << "�������: ";
        cin >> students[i].lastName;
        cout << "���: ";
        cin >> students[i].firstName;
        cout << "�������: ";
        cin >> students[i].age;
        cout << "������: ";
        cin >> students[i].group;
    }

    // ������ ���� ��������� � ����
    string filename = "students.txt";
    ofstream fout(filename);
    if (!fout.is_open()) {
        cerr << "������ �������� ����� ��� ������!" << endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        fout << students[i].lastName << " "
            << students[i].firstName << " "
            << students[i].age << " "
            << students[i].group << endl;
    }

    fout.close();
    cout << "������ �������� � ���� " << filename << endl;

    // ������ ��������� �� �����
    ifstream fin(filename);
    if (!fin.is_open()) {
        cerr << "������ �������� ����� ��� ������!" << endl;
        return 1;
    }

    int count = 0;
    while (count < MAX_STUDENTS && fin >> students[count].lastName
        >> students[count].firstName
        >> students[count].age
        >> students[count].group) {
        ++count;
    }

    fin.close();

    // ����� ���������, ��� ������� ���������� �� I ��� F
    cout << "��������, ��� ������� ���������� �� I ��� F:\n";
    for (int i = 0; i < count; ++i) {
        if (startsWith('I', students[i].lastName) || startsWith('F', students[i].lastName)) {
            cout << "�������: " << students[i].lastName
                << ", ���: " << students[i].firstName
                << ", �������: " << students[i].age
                << ", ������: " << students[i].group << endl;
        }
    }

    return 0;
}