// A program to check whether the given number is divisible by 5 or not
#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 5 == 0)
        cout << "The given number " << num << " is divisible by 5" << endl;
    else
        cout << "The given number " << num << " is not divisible by 5" << endl;

    return 0;
}