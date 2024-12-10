#include <iostream>

#include <cstdlib>

#define _USE_MATH_DEFINES // объявил директиву препроцессора для работы с математическими константами
#include <math.h> // добавил библиотеку отвечающую за добавление математических функций

#include <locale.h>  // библиотека для вывода кириллицы в консоль 


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double Z1, Z2, gradus;

	cout << "Введите угол: ";
	cin >> gradus;
	cout << endl;
	int gradusCHEACK = gradus;
	int gradusFORanswer = gradus;

	if (gradusCHEACK < 0)
	{
		while (gradusCHEACK < 0) { gradusCHEACK = gradusCHEACK + 360; }
	}

	if (gradusCHEACK > 360)
	{
		while (gradusCHEACK > 360) { gradusCHEACK = gradusCHEACK - 360; }
	}

	if (gradusCHEACK == 90 || gradusCHEACK == 270 || gradusCHEACK == 0 || gradusCHEACK == 180)
	{
		cout << "Не определенно/стремиться к бесконечности" << endl;
		return 0;
	} /*проверка на возможность решения задачи (тангенса не существует в 90 и 270 градусах), а так же в 0 и 180 синус равен нулю, а во второй
	формуле синус стоит в знаменателе. Следовательно функция тоже не будет определенна. смотреть >> ~ССЫЛКА 1~*/
	gradus = (gradus * M_PI) / 180; //перевод из градусов в радианы, т.к. функции работают исключительно с ними




	Z1 = 1 / tan(gradus); //если посмотреть на формулу, то мы увидим, что это перевернутая формула тангенса двойного угла, упростив которую мы получим данное выражение

	const double sinus = sin(gradus);

	Z2 = 1 / (sinus / (sqrt(1 - pow(sinus, 2))));
	if (gradusCHEACK > 90 && gradusCHEACK < 270) { Z2 = Z2 * -1; } /* ~ССЫЛКА1~ Сначала с помощью условных операторов привели угол к положительным четвертям для последующей проверки.
	 Т.к. в 2 и 3 четверти у синуса и тангенса знаки отличаются, я умножил вторую  функцию на -1 с целью получения корректного ответа. */


	cout << "1-tg^2(" << gradusFORanswer << "°)" << endl;
	cout << "-----------  =  " << Z1 << endl;
	cout << " 2*tg(" << gradusFORanswer << "°)" << endl;
	cout << endl;


	cout << "+-sqrt(1-sin^2(" << gradusFORanswer << "°))" << endl;
	cout << "-----------------  =  " << Z2 << endl;
	cout << "     sin(" << gradusFORanswer << "°)" << endl;
	cout << endl;

	system("pause>nul");


	return 0;

}
