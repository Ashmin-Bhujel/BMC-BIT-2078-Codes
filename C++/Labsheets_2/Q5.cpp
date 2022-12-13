// A program to find area and perimeter of a rectangle
#include <iostream>

using namespace std;

int main() {
    int length, breadth, area, perimeter;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the breadth: ";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    cout << "The area and the perimeter of the rectangle is " << area << " and " << perimeter << " respectively." << endl;
    return 0;
}