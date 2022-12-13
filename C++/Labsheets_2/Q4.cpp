// A program to print the result of operations sum, average, largest, smallest done on 3 numbers
#include <iostream>

using namespace std;

int main() {
    int x, y, z, sum;
    float avg;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Enter third number: ";
    cin >> z;

    sum = x + y + z;
    avg = (float) sum / 3;

    cout << "The sum of given three numbers is " << sum << endl;
    cout << "The average of given three numbers is " << avg << endl;
    (x > y && x > z) ? cout << x << " is largest" << endl : ((y > x && y > z) ? cout << y << " is largest" << endl : cout << z << " is largest" << endl);
    (x < y && x < z) ? cout << x << " is smallest" << endl : ((y < x && y < z) ? cout << y << " is smallest" << endl : cout << z << " is smallest" << endl);

    return 0;
}