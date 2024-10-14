#include <iostream>
using namespace std;
int main() {
	int n,i,x=0, chet=0,nechet=0;
	cout << "Vvedite razmer massiva do 100: ";
	while (x != 1) {
		cin >> n;
		if (n > 100) {
			cout << "Vvedite razmer massiva do 100: ";
		}
		else { x = 1; }
	}  
	cout << "Vvedite elementy: " << endl;
	int arr[100]{};
	for (i = 0; i < n; i++) {
		cout << "[" << i + 1 << "]";
		cin >> arr[i];
	}
	for (i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) { chet += arr[i]; }
		else { nechet += arr[i]; }
	}
	cout << "Summa nechetnych: " << nechet << endl;
	cout << "Summa chetnych: " << chet << endl;
	return 0;
}
