#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Ru");
	int str = 5;
	int stl = 5;
	int** arr{ new int* [str] };
	for (int i = 0; i < str; i++) 
	{
		arr[i] = new int[stl];
	}
	for (int i = 0; i < str; i++) 
	{
		for (int j = 0; j < stl; j++) 
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < i; j++)
		{
			arr[i][j] = 0;
		}
	}
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < stl; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < str; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}