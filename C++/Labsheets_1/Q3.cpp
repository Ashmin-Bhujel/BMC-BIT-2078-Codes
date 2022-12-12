// A program to check whether the given number is a multiple of both 5 and 11
#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 5 == 0 && num % 11 == 0)
        cout << "The given number " << num << " is a multiple of both 5 and 11" << endl;
    else
        cout << "The given number " << num << " is not a multiple of both 5 and 11" << endl;

    return 0;
}