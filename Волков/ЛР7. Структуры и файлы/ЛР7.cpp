#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Структура для хранения данных о студенте
struct Student {
    string lastName;   // Фамилия
    string firstName;  // Имя
    int age;           // Возраст
    int group;         // Группа
};

// Функция проверки, начинается ли строка на указанный символ
bool startsWith(char c, const string& str) {
    if (str.empty()) return false;
    return str[0] == c || str[0] == (c >= 'A' && c <= 'Z' ? c + 32 : c - 32);
}

int main() {
    setlocale(LC_ALL, "RU");
    const int MAX_STUDENTS = 100; // Максимальное количество студентов
    Student students[MAX_STUDENTS];
    int n;

    // Ввод количества студентов
    cout << "Введите количество студентов (не более " << MAX_STUDENTS << "): ";
    cin >> n;

    if (n <= 0 || n > MAX_STUDENTS) {
        cerr << "Некорректное количество студентов!" << endl;
        return 1;
    }

    // Ввод данных студентов
    for (int i = 0; i < n; ++i) {
        cout << "Введите данные для студента #" << i + 1 << ":\n";
        cout << "Фамилия: ";
        cin >> students[i].lastName;
        cout << "Имя: ";
        cin >> students[i].firstName;
        cout << "Возраст: ";
        cin >> students[i].age;
        cout << "Группа: ";
        cin >> students[i].group;
    }

    // Запись всех студентов в файл
    string filename = "students.txt";
    ofstream fout(filename);
    if (!fout.is_open()) {
        cerr << "Ошибка открытия файла для записи!" << endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        fout << students[i].lastName << " "
            << students[i].firstName << " "
            << students[i].age << " "
            << students[i].group << endl;
    }

    fout.close();
    cout << "Данные записаны в файл " << filename << endl;

    // Чтение студентов из файла
    ifstream fin(filename);
    if (!fin.is_open()) {
        cerr << "Ошибка открытия файла для чтения!" << endl;
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

    // Вывод студентов, чьи фамилии начинаются на I или F
    cout << "Студенты, чьи фамилии начинаются на I или F:\n";
    for (int i = 0; i < count; ++i) {
        if (startsWith('I', students[i].lastName) || startsWith('F', students[i].lastName)) {
            cout << "Фамилия: " << students[i].lastName
                << ", Имя: " << students[i].firstName
                << ", Возраст: " << students[i].age
                << ", Группа: " << students[i].group << endl;
        }
    }

    return 0;
}