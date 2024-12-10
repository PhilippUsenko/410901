#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    float res;
    n = 1;
    res = 0;
    while (n <= 1000) {
       res += pow((-1),(n+1)) * pow((-2.0/3.0),(n+1));
       
        n++;
        
    }

    cout << round(res * 100) / 100;
    return 0;
}
