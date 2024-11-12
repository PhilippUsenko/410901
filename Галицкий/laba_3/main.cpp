#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    double n, rez = 0, i, a;
    cout << "vvedite n " << endl;
    cin >> n;
    for (i = n; i >= 1; i--) {
        a = (pow(-1, i + 1) / i);
        rez = a + rez;
    }
    cout << rez;
}
