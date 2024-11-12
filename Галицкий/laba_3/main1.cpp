#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 0.0001;
    double sum = 0;
    int n = 1;
    double term = pow(-1, n) * (double(n) / pow(2, n));

    while (abs(term) >= a) {
        sum += term;
        n++;
        term = pow(-1, n) * (double(n) / pow(2, n));
    }
    
    cout << sum << endl;

    return 0;
}
