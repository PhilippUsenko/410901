#include <iostream>

using namespace std;

int main()
{
    int n;
    double p = 1;

	cout << "Enter a natural number: ";
    cin >> n;

    for (double i = 1; i <= n; i++)
    {
        p = p * ((i * i) / (i * i + 3));
    }

    cout << "Answer: " << p;
    return 0;
}