// A program to print greatest of given three numbers using concept of class and object
#include <iostream>

using namespace std;

class Number {
    private:
        int x, y, z;
    public:
        // Constructor
        Number() {
            cout << "Enter value of a: ";
            cin >> x;
            cout << "Enter value of b: ";
            cin >> y;
            cout << "Enter value of c: ";
            cin >> z;
        }
        int getMax() {
            return (x > y && x > z) ? x: ((y > x && y > z) ? y : z);
        }
};

int main() {
    Number n;

    int max = n.getMax();
    
    cout << max << " is the greatest number." << endl;
    return 0;
}