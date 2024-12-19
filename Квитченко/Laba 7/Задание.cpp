#include <iostream>
#include <string>
#include <fstream>
using namespace std;

enum Vacancies
{
    Manager,
    Boss,
    Clerk,
    Salesman,
};

struct Employee 
{
    string name;
    Vacancies vacancy;
    int salary;
    int hireDate[3];
};

string Vacanciesstring(Vacancies vacancy)
{
    switch (vacancy)
    {
    case Manager:
            return "Manager";
    case Boss: 
            return "Boss";
        
    case Clerk: 
            return "Clerk";
        
    case Salesman:
            return "Salesman";
        
    default:return "Unknown";
    }
}

ostream& operator<<(ostream& os, const Employee& employees)
{

    os << employees.name << endl << Vacanciesstring(employees.vacancy) << endl << employees.salary << endl << employees.hireDate[0] << "/" << employees.hireDate[1] << "/" << employees.hireDate[2] << endl;

    return os;
}




int main()
{
    setlocale(LC_ALL, "Russian");
    while (true) {

        int Numbercontorls;
        cout << "������� 0 ��� ������, ������� 1 ��� ������ �����������, ������� 2 ��� ��������� ������ ����������� : ";
        cin >> Numbercontorls;
        fstream file;
        file.open("Myfile.txt", fstream::in | fstream::out | fstream::app);
        if (!file.is_open())
        {
            cout << "���� �� ������� �������!" << endl;
            break;
        }
        else
        {
            if (Numbercontorls == 1) {

                while (true) {
                    int numbersEmployee;
                    cout << "������� ���������� ����������� : ";
                    cin >> numbersEmployee;
                    Employee* employees = new Employee[numbersEmployee];
                    
                    for (int i = 0; i < numbersEmployee; i++) {
                        cout << "������� ������ ��� ���������� #" << (i + 1) << endl;

                        cout << "������� ���: ";
                        cin.ignore();
                        getline(cin, employees[i].name);

                        cout << "�������� ��������� (0 - Manager, 1 - Boss, 2 - Clerk, 3 - Salesman): ";
                        int vacancyChoice;
                        cin >> vacancyChoice;
                        employees[i].vacancy = static_cast<Vacancies>(vacancyChoice);

                        cout << "������� ��������: ";
                        cin >> employees[i].salary;

                        cout << "������� ���� ������ �� ������ (����, �����, ���): ";
                        cin >> employees[i].hireDate[0] >> employees[i].hireDate[1] >> employees[i].hireDate[2];
                        file << "Employees #" << i+1 << endl << employees[i];
                    }

                    cout << "������� 0 ��� ������, ������� 1 ��� ��������� ������ �����������: ";
                    cin >> Numbercontorls;
                    
                    if (Numbercontorls == 1)
                    {
                        continue;
                    }
                    else if (Numbercontorls == 0)
                    {
                        break;
                    }

                    delete[] employees;

                }
            }

            else if (Numbercontorls == 2) {
                cout << "���������� �����:" << endl;
                string line;
                while (getline(file, line)) {
                    cout << line << endl;
                }
            }
            else if (Numbercontorls == 0) {
                break;
            }
            else {
                cout << "������� ���������� ��������" << endl;
            }
            file.close();
        }
    }
    return 0;
}