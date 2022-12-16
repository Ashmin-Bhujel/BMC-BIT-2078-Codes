// A program to print series 1/2 2/3 3/4 ... (n-1)/n
#include <iostream>
#include <cstdio>
// Using "cstdio" header file for printf() function

using namespace std;

int main() {
    int n, i;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Printing the series: " << endl;
    for (i = 1; i < n; i++) {
        printf("[%d/%d] ", i, i + 1);
    }
    cout << endl;
    return 0;
}