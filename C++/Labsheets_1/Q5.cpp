// A program to print the sum of the squares of digits of the given number
#include <iostream>

using namespace std;

int main() {
    int num, temp, sum = 0, digit;
    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        temp /= 10;
        sum += (digit * digit);
    }

    cout << "The sum of the squares of the given number " << num << " is " << sum << endl;

    return 0;
}