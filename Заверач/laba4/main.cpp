#include <iostream>
#include <ctime>
#include <clocale> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	double maxelement, maxelement_n, p;
	p = 1;
	int n;
	cout << "Введите длину массива: ";
	cin >> n;
	double arr[100];
	if (n >= 0 && n < 100) {
		

		for (int j = 0; j < n; j++) {
			arr[j] = rand() % 41 - 20;
			cout << arr[j] << endl;
		}
	}
	
	else {
		cout << "Число не входит в диапазон" << endl;
		return 0;
	}
	maxelement = fabs(arr[0]);
	maxelement_n = 0;

	for (int i = 1; i < n; i++){
		if(fabs(arr[i]) > maxelement)
		{
			maxelement_n = i;
			maxelement = fabs(arr[i]);
		}
	}
	for (int i = 0; i < maxelement_n; i++)
	{
		p = p * arr[i];
	}
	cout << "Произведение " << p;
	return 0;
   
}

