#include<iostream>
#include<cmath>
using namespace std;
int main1() {
    int n;
    float b = 0;
    cout << "  ¬ведите n: ";
    cin >> n;
    cout << "----------------------------------" << endl;
    while (n <= 1000) {
        b = b + (pow(-1, n) * (1 / (pow(2, n) * n)));
        n++;
    }
    b = floor(b * 1000) / 1000;
    cout << b;
    return 0;
}
