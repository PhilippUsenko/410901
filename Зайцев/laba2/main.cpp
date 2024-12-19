#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double A, B, C, AB, AC;
  cin >> A >> B >> C;
  AB = fabs(A - B);
  AC = fabs(A - C);
  if (AC > AB){
	  cout << "point B = " << B << endl << "distanse AB = " << AB;
  }
  else if (AC == AB) {
	  cout << "distance from point B = distance from point A = " << AB;
  }
  else {
	  cout << "point C = " << C << endl << "distanse AC = " << AC;
  }
  return 0;
} 
