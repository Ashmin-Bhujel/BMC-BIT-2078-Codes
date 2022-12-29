// A program to print greatest of given two numbers using concept of class and object
#include <iostream>

using namespace std;

class Number {
    private:
        int x, y;
    public:
        // Constructor
        Number() {
            cout << "Enter value of x: ";
            cin >> x;
            cout << "Enter value of y: ";
            cin >> y;
        }
        int getMax() {
            return (x > y) ? x: y;
        }
};

int main() {
    Number n;

    int max = n.getMax();
    
    cout << max << " is the greatest number." << endl;
    return 0;
}