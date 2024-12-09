#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    string s1, s2;
    cout << "Ведите первую строку" << endl;
    cin >> s1;
    cout << "Введите вторую строку" << endl;
    cin >> s2;
    if (s1 == s2)
        cout << "Строки равны";
    else
        cout <<"Строки не равны";
    return 0;
}
