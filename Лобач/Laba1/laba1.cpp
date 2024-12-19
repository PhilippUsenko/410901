#include <iostream>
#include <cmath>
#include <limits>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "¬ведите градусы:" << std::endl;

    double degrees;

    while (!(cin >> degrees)) {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    double radHalf = ((degrees / 2) * 3.14) / 180;

    double rad = degrees * 3.14 / 180;

    double tangHalf = tan(radHalf);
    double tang = tan(rad);

    float res1 = (2 * tangHalf) / (1 + tangHalf * tangHalf);
    float res2 = (tang) / (sqrt(1 + tang * tang));

    cout << "1st formula result = " << res1 << std::endl;
    cout << "2nd formula result = " << res2 << std::endl;

    res2 == res1 ? cout << "Results are identical" << endl : cout << "Results do not match" << endl;

    return 0;
}
