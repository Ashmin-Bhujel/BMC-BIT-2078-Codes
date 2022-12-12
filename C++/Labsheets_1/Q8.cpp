// A program to calculate total and percentage of the marks obtained by any student
#include <iostream>

using namespace std;

int main() {
    int s[5], total = 0;
    float percentage;

    int i;
    for (i = 0; i < 5; i++) {
        cout << "Enter marks of subject[" << i + 1 << "]: ";
        cin >> s[i];
        total += s[i];
    }

    percentage = (float) total / 5;

    cout << "The total marks obtained by the student in 5 subjects is " << total << " and the percentage is " << percentage << " %" << endl;

    return 0;
}