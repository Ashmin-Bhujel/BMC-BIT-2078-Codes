// A program to find the greatest number among the given 3 numbers without using if-else
#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Enter third number: ";
    cin >> z;

    (x > y && x > z) ? cout << x << " is greatest" << endl : ((y > x && y > z) ? cout << y << " is greatest" << endl : cout << z << " is greatest" << endl);

    return 0;
}