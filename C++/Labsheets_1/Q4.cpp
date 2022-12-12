// A program to check whether the given number is a multiple of 5 but not 11
#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 5 == 0 && num % 11 != 0)
        cout << "The given number " << num << " is a multiple of 5 but not 11" << endl;
    else
        cout << "..." << endl;

    return 0;
}