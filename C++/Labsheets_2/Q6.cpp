// A program to find radius and circumference of a circle
#include <iostream>

using namespace std;

int main() {
    int radius;
    float area, circumference;
    const float PI = 3.1415;
    cout << "Enter the radius: ";
    cin >> radius;

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    cout << "The area and the circumference of the given circle is " << area << " and " << circumference << " respectively." << endl;
    return 0;
}