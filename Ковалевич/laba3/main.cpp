#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    float sum, a;
    sum = 0;
    cout << " введите n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a = pow((-1), (n + 1)) / (n * (n + 1));
        sum += a;
    }
    cout << sum;

    return 0;
}
