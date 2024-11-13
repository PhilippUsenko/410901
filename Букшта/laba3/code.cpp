#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double S = 0,t;
    int a;
    int n = 1;

    cout << "Введите число итераций" << endl;
    cin >> a ;

    while (a > 0) 
        {
        t = pow(-1, n + 1)/pow(2 * n, 3); 
        S += t;  
        n++;    
        a--;
        }

    S = floor(S * 1000)/1000;
    cout << "Сумма ряда: " << S << endl;
    return 0;
}
