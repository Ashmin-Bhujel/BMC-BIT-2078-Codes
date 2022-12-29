// A program to check whether the given array is sorted in ascending order or not
#include <iostream>

using namespace std;

int main() {
    int nums[5] = {1, 5, 3, 10, 11};
    int i, j, count = 0;

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (nums[i] > nums[j])
                count++;
        }
    }

    if (count > 0)
        cout << "The given array is not sorted in ascending order!" << endl;
    else
        cout << "The given array is sorted in ascending order!" << endl;

    return 0;
}