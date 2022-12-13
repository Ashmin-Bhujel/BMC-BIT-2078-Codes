// A program to check whether the given number is an armstrong number or not
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num, temp, digit, result = 0;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        temp /= 10;
        result += pow(digit, 3);
    }

    if (result == num)
        cout << "The given number " << num << " is an armstrong number" << endl;
    else
        cout << "The given number " << num << " is not an armstrong number" << endl;

    return 0;
}