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
  part = a - b;
  height = part * tan(alpha);
  lateralSide = part / cos(alpha);
  P = a + b + height + lateralSide;
  S = (a + b) / 2 * height;
  cout << P << endl;
  cout << S;
  return 0;
}
