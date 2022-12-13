// A program to find simple interest and amount
#include <iostream>

using namespace std;

int main() {
    float p, t, r, si, a;
    cout << "Enter Principal (P): ";
    cin >> p;
    cout << "Enter time (T): ";
    cin >> t;
    cout << "Enter rate (R): ";
    cin >> r;

    si = (p * t * r) / 100;
    a = p + si;

    cout << "The simple interest is " << si << " and " << " the amount is " << a << endl;
    return 0;
}