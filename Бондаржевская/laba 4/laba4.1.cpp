#include <iostream>
using namespace std;

int main()
{
	double arr[5];
	double max;
	int n, h = 0;

	cout << "Enter 5 numbers:" << endl;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	max = arr[0];

	for (int k = 0; k < 5; k++)
	{
		if (arr[k] > max)
		{
			max = arr[k];
			h = k;
		}
	}
	cout << "max = " << max << endl;
	cout << "index = " << h << endl;
	
	return 0;
}