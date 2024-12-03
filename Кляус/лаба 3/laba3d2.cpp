#include <iostream>
using namespace std;
int main()
{   int n = 1;
    double alpha = 0.001, el = 1, sum = 0;

    while(abs(double((pow(-1,n))/((pow(3,n)+1)*n)) - abs(el)) > alpha)
    {   
        el = (pow(-1,n))/((pow(3,n)+1)*n);
        sum += el;
        n++;
    }
    cout << "Сумма ряда с заданной точностью alpha = 0.001: " << sum << endl;
}