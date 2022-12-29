// A program to merge elements of given two array store into third array
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b;
    cout << "Enter size of first array: ";
    cin >> a;
    cout << "Enter size of second array: ";
    cin >> b;

    int num1[a], num2[b], num3[(a + b)], i;

    // For num1 array
    cout << "Enter elements of first array: " << endl;
    for (i = 0; i < a; i++) {
        cin >> num1[i];
    }
    
    // For num2 array
    cout << "Enter elements of second array: " << endl;
    for (i = 0; i < b; i++) {
        cin >> num2[i];
    }

    // For num3 array
    // Putting elements of first array
    for (i = 0; i < a; i++) {
        num3[i] = num1[i];
    }
    // Putting elements of seconds array
    for (i = a; i < (a + b); i++) {
        num3[i] = num2[i - a];
    }

    // Printing elements of third array
    for (i = 0; i < (a + b); i++) {
        printf("[%d] ", num3[i]);
    }

    return 0;
}