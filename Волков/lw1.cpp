# include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int v1, v2, s, t, S;
	cout << "Введите v1 " << endl;
	cin >> v1;
	cout << "Введите v2 " << endl;
	cin >> v2;
	cout << "Введите t " << endl;
	cin >> t;
	cout << "Введите s " << endl;
	cin >> s;
	S = s - (v1 + v2) * t;
	if (S >= 0)
	{
		cout << "Расстояние равно " << S << endl;
	}
	else
	{
		cout << "Расстояние равно " << -S << endl;
	}
	return 0;
}
