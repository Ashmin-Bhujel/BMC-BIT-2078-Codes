// A program to convert temperature given in celsius into fahrenheit
#include <iostream>

using namespace std;

int main() {
    float celsius, fahrenheit;
    cout << "Enter the temperature in degree celsius: ";
    cin >> celsius;

    fahrenheit = ((9 * celsius) / 5) + 32;

    cout << "Temperature in fahrenheit: " << fahrenheit << endl;

    return 0;
}