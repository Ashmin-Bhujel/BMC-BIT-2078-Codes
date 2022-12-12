// A program to check whether the given number is a multiple of 5 or 11
#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 5 == 0)
        cout << "The given number " << num << " is a multiple of 5" << endl;
    else if (num % 11 == 0)
        cout << "The given number " << num << " is a multiple of 11" << endl;
    else
        cout << "The given number " << num << " is a multiple of neither 5 nor 11" << endl;

    return 0;
}