// A program to swap values of two variables
#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;

    cout  << "Before swap, x = " << x << " and y = " << y << endl;

    x = x + y;
    y = x - y;
    x = x - y;

    cout  << "After swap, x = " << x << " and y = " << y << endl;
    return 0;
}