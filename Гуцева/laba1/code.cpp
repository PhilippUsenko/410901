#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    const float PI = 3.14;
    float s;
    int r1, r2;

    cout << "R1=";
    cin >> r1;

    cout << "R1 < R2" << endl;
    cout << "R2=";
    cin >> r2;
   
    s = PI * r2 * r2 - PI * r1 * r1;
    cout << "S=" << s;
    return 0;
}


