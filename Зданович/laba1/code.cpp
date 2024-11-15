#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int firstX, secondX, firstY, secondY, distance, firstMid, secondMid;
    cout << "Enter coordinates of the first point:" << endl << "First X equals: ";
    cin >> firstX;
    cout << "First Y equals: ";
    cin >> firstY;
    cout << "Enter coordinates of the second point:" << endl << "Second X equals: ";
    cin >> secondX;
    cout << "Second Y equals: ";
    cin >> secondY;
    firstMid = firstX - secondX;
    secondMid = firstY - secondY;
    distance = sqrt(pow(firstMid, 2) + pow(secondMid, 2));
    cout << "Distance between two points :" << distance;
    return 0;
}
