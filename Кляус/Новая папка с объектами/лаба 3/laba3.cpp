#include <iostream>
using namespace std;
int main()
{
    double sum = 0;
    int n;
    cout << endl << "Введите число n: ";
    cin >> n;
    for(double i = 1; i <= n; i++)
    {
        sum += (1/i);
    }
    cout << "Ответ: " << sum << endl;
    
}   