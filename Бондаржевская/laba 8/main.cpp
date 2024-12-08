#include <iostream>
#include <string>

using namespace std;

bool ThreeNumbers(string n);

int main()
{
	setlocale(LC_ALL, "Russian");

	int k = 0;
	string number;

	for (int i = 0; i < 9999; i++)
	{
		number = to_string(i);

		while (number.length() < 4)
		{
			number = '0' + number;
		}

		if (ThreeNumbers(number) == true)
			k++;
	}

	cout << "Количество номеров: " << k;
	return 0;
}


bool ThreeNumbers(string n)
{
	int freq[10] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		freq[n[i] - '0']++;
	}
	
	bool hasthreenum = false;
	bool hasonenum = false;

	for (int f : freq)
	{
		if (f == 3)
			hasthreenum = true;
		if (f == 1)
			hasonenum = true;
	}

	if (hasthreenum && hasonenum)
		return true;
	else
		return false;
}