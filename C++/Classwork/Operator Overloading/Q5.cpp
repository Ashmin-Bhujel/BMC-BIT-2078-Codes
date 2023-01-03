// A program to compare two strings using (==) operator
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

            // Overloading the (==) operator to compare two strings
            void operator ==(AString obj) {
                // NOTE: strcmp() returns 1 when given two strings are not equal and returns 0 when given strings are equal
                if (strcmp(s, obj.s))
                    cout << "Not equal" << endl;
                else
                    cout << "Same string" << endl;
            }
};

int main() {
    // Creating objects
    AString s1;
    AString s2;

    // Comparing s1 and s2 and printing the concatenated string
    s1 == s2;
    return 0;
}