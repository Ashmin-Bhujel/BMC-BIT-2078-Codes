// A program to find roots of a quadratic equation
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b , c, r1, r2, discriminant, realPart, imaginaryPart;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;

    discriminant = pow(b, 2) - (4 * a * c);

    if (discriminant > 0) {
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << endl << "Roots are real and different." << endl;
        cout << "Root 1 = " << r1 << endl;
        cout << "Root 2 = " << r2 << endl;
    }
    
    else if (discriminant == 0) {
        r1 = -b / (2 * a);
        cout << endl << "Roots are real and same." << endl;
        cout << "Root 1 = Root 2 = " << r1 << endl;
    }

    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << endl << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
    return 0;
}