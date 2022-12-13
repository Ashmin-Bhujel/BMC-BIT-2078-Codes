// A program to check whether the given first number is a multiple of the second number
#include <iostream>

using namespace std;

int main() {
    int m, n;
    cout << "Enter first number: ";
    cin >> m;
    cout << "Enter second number: ";
    cin >> n;

    if (m % n == 0)
        cout << m << " is a multiple of " << n << endl;
    else
        cout << m << " is not a multiple of " << n << endl;

    return 0;
}