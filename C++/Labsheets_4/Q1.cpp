// A program to store sequence of 1, -2, 3, -4, ..., 29, -30 into an array
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int seq[30], i;

    for (i = 0; i < 30; i++) {
        if ((i + 1) % 2 == 0)
            seq[i] = -(i + 1);
        else
            seq[i] = (i + 1);
    }

    cout << "Sequence:" << endl;
    for (i = 0; i < 30; i++) {
        printf("[%d] ", seq[i]);
    }
    return 0;
}