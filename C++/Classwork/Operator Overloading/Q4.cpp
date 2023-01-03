// A program to concatenate two strings using (+) operator
#include <iostream>
#include <string.h>

using namespace std;

class AString{
        private:
            char s[50];
        public:
            // Constructor to get data
            AString() {
                cout << "Enter a string: ";
                cin >> s;
            }

            // Overloading the (+) operator to concatenate two strings
            void operator +(AString obj) {
                // Adding space between two strings
                strcat(s, " ");
                // Concatenating with second string
                strcat(s, obj.s);

                cout << "Concatenated string: " << s << endl;
            }
};

int main() {
    // Creating objects
    AString s1;
    AString s2;

    // Concatenating s1 and s2 and printing the concatenated string
    s1 + s2;
    return 0;
}