// A program to invert the sign of data members by overloading the (-) operator
#include <iostream>

using namespace std;

class Co_Ordinations {
    private:
        int x;
        int y;
    public:
        // Constructor to get data
        Co_Ordinations() {
            cout << "Enter value of x co-ordinate: ";
            cin >> x;
            cout << "Enter value of y co-ordinate: ";
            cin >> y;
        }

        // showData() member function
        void showData() {
            cout << endl << "x co-ordinate: " << x << endl;
            cout << "y co-ordinate: " << y << endl;
        }

        // Overloading the (-) unary operator
        void operator -() {
            x = -x;
            y = -y;
        }
};

int main() {
    // Creating object
    Co_Ordinations c1;

    // Before the sign inversion
    c1.showData();

    // Inverting sign of data members using overloaded (-) operator
    -c1;

    // After the sign inversion
    c1.showData();
    return 0;
}