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
        cout << "¬ведите 0 дл€ выхода, введите 1 дл€ записи сотрудников, введите 2 дл€ просмотра списка сотрудников : ";
        cin >> Numbercontorls;
        fstream file;
        file.open("Myfile.txt", fstream::in | fstream::out | fstream::app);
        if (!file.is_open())
        {
            cout << "‘айл не удалось открыть!" << endl;
            break;
        }
        else
        {
            if (Numbercontorls == 1) {

                while (true) {
                    int numbersEmployee;
                    cout << "¬ведите количетсво сотрудников : ";
                    cin >> numbersEmployee;
                    Employee* employees = new Employee[numbersEmployee];
                    
                    for (int i = 0; i < numbersEmployee; i++) {
                        cout << "¬ведите данные дл€ сотрудника #" << (i + 1) << endl;

                        cout << "¬ведите им€: ";
                        cin.ignore();
                        getline(cin, employees[i].name);

                        cout << "¬ыберите должность (0 - Manager, 1 - Boss, 2 - Clerk, 3 - Salesman): ";
                        int vacancyChoice;
                        cin >> vacancyChoice;
                        employees[i].vacancy = static_cast<Vacancies>(vacancyChoice);

                        cout << "¬ведите зарплату: ";
                        cin >> employees[i].salary;

                        cout << "¬ведите дату приема на работу (день, мес€ц, год): ";
                        cin >> employees[i].hireDate[0] >> employees[i].hireDate[1] >> employees[i].hireDate[2];
                        file << "Employees #" << i+1 << endl << employees[i];
                    }

                    cout << "¬ведите 0 дл€ выхода, введите 1 дл€ повторной записи сотрудников: ";
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
                cout << "—одержимое файла:" << endl;
                string line;
                while (getline(file, line)) {
                    cout << line << endl;
                }
            }
            else if (Numbercontorls == 0) {
                break;
            }
            else {
                cout << "¬ведите правильное значение" << endl;
            }
            file.close();
        }
    }
    return 0;
}