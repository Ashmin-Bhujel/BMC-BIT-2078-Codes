// A program to check whether the given year is leap year or not
#include <iostream>

using namespace std;

int main() {
    int year;
    cout << "Enter the year: ";
    cin >> year;

    if (year % 4 == 0)
        cout << "The year " << year << " is a leap year." << endl;
    else
        cout << "The year " << year << " is not a leap year." << endl;

    return 0;
}