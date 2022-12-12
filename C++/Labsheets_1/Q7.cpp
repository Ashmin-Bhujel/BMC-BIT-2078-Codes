// A program to convert given seconds into hours, minutes and seconds
#include <iostream>

using namespace std;

int main() {
    int time, hours = 0, minutes = 0, seconds = 0, temp;
    cout << "Enter the total seconds: ";
    cin >> time;
    temp = time;

    hours = temp / 3600;
    temp -= hours * 3600;
    minutes = temp / 60;
    temp -= minutes * 60;
    seconds = temp;

    cout << "The given total " << time << " seconds is " << hours << " hr " << minutes << " min " << seconds << " sec" << endl;
    return 0;
}