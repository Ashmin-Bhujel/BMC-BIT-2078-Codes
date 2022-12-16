// A program to find GCD (HCF) and LCM of given two numbers
#include <iostream>

using namespace std;

int main() {
    int num1, num2, greatest, gcd, lcm, i;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Greatest Number
    greatest = (num1 > num2) ? num1 : num2;

    // For GCD
    for (i = 1; i < greatest; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    // For LCM
    for (i = greatest; i >= greatest; i++) {
        if (i % num1 == 0 && i % num2 == 0) {
            lcm = i;
            break;
        }
    }

    cout << "The GCD and the LCM of the given numbers " << num1 << " and " << num2 << " is " << gcd << " and " << lcm << " respectively." << endl;

    return 0;
}