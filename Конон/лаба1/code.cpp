#include <iostream> // ввод/вывод
using namespace std; // директива, сообщающая использование пр-во имен std
const double PI = 3.141592653589793;

int main() {
	setlocale(LC_ALL, "RU"); // подключение распознавания русского языка
	float alfa_d, alfa_r, A, B, Z1, Z2; // объявление переменных
	cout << "Введите значение угла в градусной мере:"; // вывод текста на экран
	cin >> alfa_d; // ввод градусов с клавиатуры
	
	// Приведение угла к диапазону [0, 360)
	while (alfa_d >= 360) {
		alfa_d = alfa_d - 360;
	}
	while (alfa_d < 0) {
		alfa_d = alfa_d + 360;
	}

	// Переводим угол в радианы после корректировки
	alfa_r = (alfa_d * PI) / 180.0;

	A= sin(alfa_r) / sqrt(1 - pow(sin(alfa_r), 2));
	B= sqrt(1 - pow(cos(alfa_r), 2)) / cos(alfa_r);

	// проверка на частные случаи
	if (alfa_d == 90 || alfa_d == 270) {
		cout << "Нет значения при данном угле." << endl;
	}

	//выбор знака для значения выражения
	else {
		if (alfa_d>0 && alfa_d<90) {
			Z1 = A;
			Z2 = B;
		}
		else if (alfa_d>90 && alfa_d<180) {
			Z1 = -A;
			Z2 = B;
		}
		else if (alfa_d > 180 && alfa_d < 270) {
			Z1 = -A;
			Z2 = -B;
		}
		else if (alfa_d > 270 && alfa_d < 360) {
			Z1 = A;
			Z2 = -B;
		}
		// вывод результата на экран
		cout << "Z1=" << Z1 << endl << "Z2=" << Z2 << endl;
	}
}
