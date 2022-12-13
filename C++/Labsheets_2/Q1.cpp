// A program to print the sum of the digits of the given number
#include <iostream>

using namespace std;

int main() {
    int num, temp, digit, sum = 0;
    cout << "Enter the num: ";
    cin >> num;
    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        temp /= 10;
        sum += digit;
    }

    cout << "The sum of digits of the given number " << num << " is " << sum << endl;

    return 0;
}