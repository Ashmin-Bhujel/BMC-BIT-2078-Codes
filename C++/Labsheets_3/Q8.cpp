// A program to print sum of the digits of a given number
#include <iostream>

using namespace std;

int main() {
    int num, temp, sum = 0, i, digit;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        temp /= 10;
        sum += digit;
    }

    cout << "The sum of the digits of the number " << num << " is " << sum << endl;
    return 0;
}