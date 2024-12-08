#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
using namespace std;

enum class Vacancies
{
	Boss,
	Manager,
	Clerk,
	Salesman,
};

struct Employee
{
	string name;
	Vacancies vacancy{ Vacancies::Clerk };
	int salary = 0;
	int data[3] = { 0, 0, 0 };
};

Vacancies VacancyChoice();
Employee information();
string VacancyToString(Vacancies vacancy);

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);

	int n;
	cout << "������� ���������� �����������: ";
	cin >> n;

	Employee* employees = new Employee[n];
	for (int i = 0; i < n; i++)
	{
		cout << "\n��������� " << i + 1;
		employees[i] = information();
	}

	ofstream fin;
	fin.open("Employees.txt");

	if (!fin.is_open())
	{
		cout << "�� ������� ������� ����." << endl;
		return 1;
	}

	fin << "-------------------------���������� � �����������------------------------" << endl;
	for (int i = 0; i < n; i++)
	{
		fin << "\n��������� " << i + 1 << ":" << endl;
		fin << "���: " << employees[i].name << endl;
		fin << "���������: " << VacancyToString(employees[i].vacancy) << endl;
		fin << "��������: " << employees[i].salary << endl;
		fin << "���� ������ �� ������: " << employees[i].data[0] << "." << employees[i].data[1] << "." << employees[i].data[2] << endl;
	}
	fin.close();

	ifstream fout;
	fout.open("Employees.txt");
	
	string line;
	while (getline(fout, line))
	{
		cout << line << endl;
	}

	fout.close();
	delete[] employees;
	return 0;
}

Vacancies VacancyChoice()
{
	int num;
	cout << "1. �������� \n2. �������� \n3. ������� �������� \n4. ��������" << endl;
	cout << "\n������� ����� ���������: ";

	while (true)
	{
		cin >> num;
		if ((num < 1) || (num > 4))
			cout << "������������ ����. ���������� ��� ���." << endl;
		else
			break;
	}


	switch (num)
	{
	case 1: return Vacancies::Boss;
	case 2: return Vacancies::Manager;
	case 3: return Vacancies::Clerk;
	case 4: return Vacancies::Salesman;
	}
	return Vacancies::Clerk;
}

Employee information()
{
	Employee emp;

	cout << "\n������� ��� ����������:" << endl;
	cin.ignore();
	getline(cin, emp.name);

	cout << "\n�������� ��������� ����������:" << endl;
	emp.vacancy = VacancyChoice();

	cout << "\n������� �������� ����������:" << endl;
	cin >> emp.salary;

	cout << "\n������� ���� ������ ���������� �� ������:" << endl;
	while (true)
	{
		cin >> emp.data[0];
		if ((emp.data[0] < 1) || (emp.data[0] > 31))
			cout << "������������ ����. ���������� ��� ���." << endl;
		else
			break;
	}
	while (true)
	{
		cin >> emp.data[1];
		if ((emp.data[1] < 1) || (emp.data[1] > 12))
			cout << "������������ ����. ���������� ��� ���." << endl;
		else
			break;
	}
	while (true)
	{
		cin >> emp.data[2];
		if ((emp.data[2] < 1965) || (emp.data[2] > 2024))
			cout << "������������ ����. ���������� ��� ���." << endl;
		else
			break;
	}

	return emp;
}

string VacancyToString(Vacancies vacancy)
{
	switch (vacancy)
	{
	case Vacancies::Boss: return "��������";
	case Vacancies::Manager: return "��������";
	case Vacancies::Clerk: return "������� ��������";
	case Vacancies::Salesman: return "��������";
	}
	return "������� ��������";
}
