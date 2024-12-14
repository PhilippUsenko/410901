#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int arr[5][5]{
		{1,2,3,4,5},
	    {5,6,7,8,9},
		{1,2,3,4,5},
		{5,6,7,8,9},
		{1,2,3,4,5}
	};
	for (int i = 0; i < 5; i++) 
	{
		for (int j = 0; j < i; j++) 
		{
			arr[i][j] = 0;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}