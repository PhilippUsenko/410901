#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "");
float x, y;
cout << "������� ������ �����: " << endl;
cin >> x;
cout << "������� ������ �����: " << endl;
cin >> y;
if (x<=y)
{
cout << "����� X=" << x << endl;
cout << "����� Y=" << y << endl;
}
else
{
cout << "����� X=" << y << endl;
cout << "����� Y=" << x << endl;
}
return 0;
}