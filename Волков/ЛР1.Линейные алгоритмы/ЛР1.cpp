# include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int v1, v2, s, t, S;
	cout << "������� v1 " << endl;
	cin >> v1;
	cout << "������� v2 " << endl;
	cin >> v2;
	cout << "������� t " << endl;
	cin >> t;
	cout << "������� s " << endl;
	cin >> s;
	S = s - (v1 + v2) * t;
	if (S >= 0)
	{
		cout << "���������� ����� " << S << endl;
	}
	else
	{
		cout << "���������� ����� " << -S << endl;
	}
	return 0;
}