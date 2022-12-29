// A program to swap value of two instance variables using concept of class and object
#include <iostream>

using namespace std;

class Swapper {
    private:
        int x, y;
    public:
        // Constructor
        Swapper(int a, int b) {
            x = a;
            y = b;
        }
        int getX() {
            return x;
        }
        int getY() {
            return y;
        }
        void swap() {
            x = x + y;
            y = x - y;
            x = x - y;
        }
};

int main() {
    // Implicit way argument passing to constructor
    Swapper s(3, 18);
    // Explicit way argument passing to constructor
    // Swapper s = Swapper(4, 24);

    cout << "Before swapping:" << endl;
    cout << "x: " << s.getX() << " y: " << s.getY() << endl;

    // Calling swap() function
    s.swap();

    cout << "After swapping:" << endl;
    cout << "x: " << s.getX() << " y: " << s.getY() << endl;

    return 0;
}