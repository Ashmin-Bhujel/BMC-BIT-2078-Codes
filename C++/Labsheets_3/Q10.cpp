// A program to print squares and cubes of the first 10 natural numbers
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;

    // Natural Numbers
    cout << "Natural Numbers: " << endl;
    for (n = 1; n <= 10; n++) {
        printf("[%d] ", n);
    }
    cout << endl;
    
    // Squares
    cout << "Squares: " << endl;
    for (n = 1; n <= 10; n++) {
        printf("[%d] ", n * n);
    }
    cout << endl;
    
    // Cubes
    cout << "Cubes: " << endl;
    for (n = 1; n <= 10; n++) {
        printf("[%d] ", n * n * n);
    }
    cout << endl;

    return 0;
}