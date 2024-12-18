#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
Для получения места в общежитии формируется список
студентов, который включает Ф.И.О.студента, группу, средний балл, доход на
члена семьи.Общежитие в первую очередь предоставляется тем, у кого доход
на члена семьи меньше двух минимальных зарплат, затем остальным в
порядке уменьшения среднего балла.Вывести список очередности
предоставления мест в общежитии.Предусмотреть запись в файл.
*/


// Structure to store student information
struct Student {
    string name;  // Full name
    int group; // Group
    double grade; // Grade point average
    int income; // Income per family member
};


int main() {
    int quantity = 5;
    Student *students = new Student[quantity];

    students[0] = { "Ivanov Sergey Viktorovich", 1, 9.3, 700 };
    students[1] = { "Petrova Anna Dmitrievna", 2, 8.2, 500 };
    students[2] = { "Smirnov Alexey Ivanovich", 3, 7.9, 1500 };
    students[3] = { "Kuznetsova Olga Andreyevna", 4, 6.8, 550 };
    students[4] = { "Vasilyev Mikhail Nikolayevich", 5, 10, 900 };

    //Student sorting
    int serial_num = 0;
    for (int i = 0; i < quantity; i++) {
        if (students[i].income < 626) {
            swap(students[i], students[serial_num]);
            serial_num += 1;
        }
    }
    for (int i = serial_num; i < quantity; i++) {
        Student max = students[i];
        for (int j = i+1; j < quantity; j++) {
            if (students[i].grade < students[j].grade) swap(students[i], students[j]);
        }
    }

    //Console output
    cout << "The order of provision of places in the dormitory: \n";
    for (int i = 0; i < quantity; i++) {
        cout << "Full name: " << students[i].name << "\n"
            << "Group: " << students[i].group << "\n"
            << "Average mark: " << students[i].grade << "\n"
            << "Income per family member: " << students[i].income << "\n\n";
    }


    //Saving to file
    string filename = "dormitory_list.txt";
    ofstream file(filename);
    if (!file.is_open()) {
        cout << "Error! The file could not be opened";
        return 0;
    }
    for (int i = 0; i < quantity; i++) {
        file << "Full name: " << students[i].name << "\n"
            << "Group: " << students[i].group << "\n"
            << "Average mark: " << students[i].grade << "\n"
            << "Income per family member: " << students[i].income << "\n\n";
    }

    file.close();
    delete[] students;

    return 0;
}