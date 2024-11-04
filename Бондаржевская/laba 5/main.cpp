#include <iostream>
using namespace std;

int main()
{
	int arr[2][3];
	int max, min;
	int n;

	cout << "Enter 6 numbers:" << endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}

	max = arr[0][0];
	min = arr[0][0];

	for (int k = 0; k < 2; k++)
	{
		for (int l = 0; l < 3; l++)
		{
			if (arr[k][l] > max)
			{
				max = arr[k][l];
			}
			if (arr[k][l] < min)
			{
				min = arr[k][l];
			}
		}
	}
	cout << "max = " << max << endl;
	cout << "min = " << min << endl;
	cout << "product = " << max * min << endl;

	return 0;
}