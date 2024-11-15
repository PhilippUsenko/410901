#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a != b) {
        if (a == c && c==d) {
            cout << "2";
        }
        else if(b==c && c==d){
            cout << "1";
        }
        else {
            cout << "The conditions of the task were not met.";
        }
    }
    else if (c != d) {
        if (c == a && a==b) {
            cout << "4";
        }
        else if(a==b && b==d){
            cout << "3";
        }
        else {
            cout << "The conditions of the task were not met.";
        }
    }
}
