// A program to evaluate series: 1 + (2 * 1) + (3 * 2) + ... + (n * (n - 1))
#include <iostream>

using namespace std;

int main() {
    int sum = 1, n, i;
    cout << "Enter the value of n: ";
    cin >> n;

    for (i = 2; i <= n; i++) {
        sum += (i * (i - 1));
    }

    cout << "The result for the given series upto n = " << n << " is " << sum << endl;
    return 0;
}