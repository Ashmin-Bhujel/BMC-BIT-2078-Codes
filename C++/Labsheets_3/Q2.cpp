// A program to convert the case from lower to upper and vice-versa
/* ASCII code for english letters
 * (A - Z) => (65 - 90)
 * (a - z) => (97 - 122)
 */
#include <iostream>

using namespace std;

int main() {
    char c;
    cout << "Enter an english letter (a - z or A - Z): ";
    cin >> c;

    if ((int) c >= 65 && (int) c <= 90) {
        c += 32;
        cout << "After changing to Lowercase: " << c << endl;
    }
    else if ((int) c >= 97 && (int) c <= 122) {
        c -= 32;
        cout << "After changing to Uppercase: " << c << endl;
    }
    else {
        cout << "Not an english letter!" << endl;
    }

    return 0;
}