#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    for (int i = 100; i <= 999; i++) {
        if (i / 100 == i % 10) {
            cout << i << " ";
        }
        else continue;
    }
    float n = 0,s = 0;
    while (n != 999) {
        s = s + pow(-1, n) * 1 / (3*n + 1);
        n++;
    }
    s = round(s * 100) / 100; 
    cout << s;
}
