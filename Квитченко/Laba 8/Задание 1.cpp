#include <iostream>

int Sum(int n) {
  int Sum = 0;
  while (n != 0) {
    Sum += n % 10;
    n /= 10;
  }
  return Sum;
}

using namespace std;

int main() {
    int N, sum2;
    cin >> N;
    sum2 = Sum(N);
    cout << sum2;
    return 0;
}