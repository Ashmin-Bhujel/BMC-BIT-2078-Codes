// A program to compare two distinct objects by overloading operators (< and >)
#include <iostream>

using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;
    public:
        // Constructor to get data
        Rectangle() {
            cout << endl << "Enter value of length: ";
            cin >> length;
            cout << "Enter value of breadth: ";
            cin >> breadth;
        }

        // Overloading the (<) operator
        void operator <(Rectangle r) {
            if ((length * breadth) < (r.length * r.breadth))
                cout << "Rectangle r1 is smaller than rectangle r2" << endl;
            else
                cout << "Rectangle r1 is bigger than rectangle r2" << endl;
        }

        // Overloading the (>) operator
        void operator >(Rectangle r) {
            if ((length * breadth) > (r.length * r.breadth))
                cout << "Rectangle r1 is bigger than rectangle r2" << endl;
            else
                cout << "Rectangle r1 is smaller than rectangle r2" << endl;
        }
};

int main() {
    // Creating two objects r1 and r2
    Rectangle r1;
    Rectangle r2;

    // Comparing the objects
    r1 < r2;
    // r1 > r2;
    return 0;
}