// A program to perform simple arithmetic operations on any two numbers
#include <iostream>

using namespace std;

int main() {
    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    float sum, diff, product, div;
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    div = num1 / num2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << product << endl;
    cout << "Division: " << div << endl;
    return 0;
}