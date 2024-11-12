#include <iostream>
using namespace std;
int main(){
  double a, b, part, P, S, lateralSide, alpha, height;
  cin >> a >> b >> alpha;
  if (!cin)
  {
	  cout << "Error!" << endl;
	  return 0;
  }

  part = a - b;  //разница между основаниями
  height = part * tan(alpha);  //высота
  lateralSide = part / cos(alpha);  //боковая сторона
  P = a + b + height + lateralSide; //периметр
  S = (a + b) / 2 * height; //площадь
  cout << P << endl;
  cout << S;
  return 0;
}
