// A program to find the second largest number among given three numbers
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;

    if (a > b && a > c) {
        if (b > c)
            cout << b << " is second largest" << endl;
        else
            cout << c << " is second largest" << endl;
    }

    else if (b > a && b > c) {
        if (a > c)
            cout << a << " is second largest" << endl;
        else
            cout << c << " is second largest" << endl;
    }

    else {
        if (a > b)
            cout << a << " is second largest" << endl;
        else
            cout << b << " is second largest" << endl;
    }
    return 0;
}