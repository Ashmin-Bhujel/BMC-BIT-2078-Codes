// A program to print reverse of a given number
#include <iostream>

using namespace std;

int main() {
    int num, temp, reverse = 0, i, digit;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        temp /= 10;
        reverse = (reverse * 10) + digit;
    }

    cout << "The reverse of the number " << num << " is " << reverse << endl;
    return 0;
}