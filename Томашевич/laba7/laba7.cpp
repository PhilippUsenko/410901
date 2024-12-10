#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    string name;  // ФИО
    int group;    // Номер группы
    double grade; // Средний балл
    int income;   // Доход на члена семьи
};

int main() {
    setlocale(LC_ALL, "Ru");
    const int minincome = 1252; // Две минимальные зарплаты
    const int quantity = 5;    // Количество студентов

    // Динамический массив студентов
    Student* students = new Student[quantity]{
        {"Иванов Сергей Викторович", 1, 9.3, 1700},
        {"Петрова Анна Дмитриевна", 2, 8.2, 500},
        {"Смирнов Алексей Иванович", 3, 7.9, 1500},
        {"Кузнецов Иван Леонидович", 4, 6.8, 990},
        {"Васильев Михаил Николаевич", 5, 10.0, 1100}
    };

    // Сортировка студентов
    // Перемещение студентов с низким доходом в начало массива
    int lowincomecount = 0;
    for (int i = 0; i < quantity; i++) {
        if (students[i].income < minincome) {
            swap(students[i], students[lowincomecount]);
            lowincomecount++;
        }
    }

    // Сортировка остальных студентов по убыванию среднего балла
    for (int i = lowincomecount; i < quantity - 1; i++) {
        for (int j = i + 1; j < quantity; j++) {
            if (students[i].grade < students[j].grade) {
                swap(students[i], students[j]);
            }
        }
    }

    // Вывод студентов на консоль
    cout << "Очередность предоставления мест в общежитии:\n";
    for (int i = 0; i < quantity; i++) {
        cout << "Ф.И.О.: " << students[i].name << "\n"
            << "Группа: " << students[i].group << "\n"
            << "Средний балл: " << students[i].grade << "\n"
            << "Доход на члена семьи: " << students[i].income << "\n\n";
    }

    // Запись студентов в файл
    ofstream file("list.txt");
        for (int i = 0; i < quantity; i++) {
            file << "Ф.И.О.: " << students[i].name << "\n"
                << "Группа: " << students[i].group << "\n"
                << "Средний балл: " << students[i].grade << "\n"
                << "Доход на члена семьи: " << students[i].income << "\n\n";
        }
        file.close();

    delete[] students;

    return 0;
}
