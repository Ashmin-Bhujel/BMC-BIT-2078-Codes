// A program to add two complex number using (+) operator
#include <iostream>

using namespace std;

class Complex {
    private:
        int real;
        int imaginary;
    public:
        // Default constructor
        Complex() {}

        // Parameterized constructor
        Complex(int r, int i) {
            real = r;
            imaginary = i;
        }

        // Overloading (+) operator
        // Here, "Complex" is return type of operator function not a constructor
        Complex operator +(Complex c) {
            Complex temp;
            temp.real = real + c.real;
            temp.imaginary = imaginary + c.imaginary;
            return temp;
        }

        void showData() {
            cout << "Complex Number: " << endl;
            if (imaginary < 0)
                cout << real << "" << imaginary << "i" << endl;
            else
                cout << real << " + " << imaginary << "i" << endl;
        }
};

int main() {
    // Creating objects
    Complex c1(1, -3);
    Complex c2(4, 5);
    Complex c3;

    // Implicit (+) operator function call
    c3 = c1 + c2;

    // Explicit (+) operator function call
    // c3 = c1.operator +(c2);

    c3.showData();
    return 0;
}