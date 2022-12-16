// A program to count digits of a given number
#include <iostream>

using namespace std;

int main() {
    int num, temp, count = 0, i;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    while (temp != 0) {
        temp /= 10;
        count++;
    }

    cout << "The number " << num << " has " << count << " digits." << endl;
    return 0;
}