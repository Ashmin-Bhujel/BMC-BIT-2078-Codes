// A program to dynamically allocate and free memory for a string with the help of constructor and destructure
#include <iostream>
#include <string.h>

using namespace std;

class String {
    private:
        char *name;
    public:
        // Dynamic Constructor to allocate memory for name
        String(char *str) {
            int length = strlen(str);
            name = new char[length + 1];
            strcpy(name, str);
        }
        
        // Member Function/Method to print the string
        void display() {
            cout << "The given string is:" << endl << name << endl;
        }
        
        // Destructor to free the memory allocated for name
        ~String() {
            delete []name;
        }
};

int main() {
    // Initializing a string
    char str[20] = "Hello, C++!";

    // Implicit constructor calling
    String s(str);
    
    // Explicit constructor calling
    // String s = String(str);

    s.display();
    return 0;
}