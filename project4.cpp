/**
    Project 4
    @version 2.0
    @author Cally Sibben

    @description
    Time machine distance calculation
*/

#include <iostream>

using namespace std;


void readTime(int& m, int& h, bool& is);
int computeDifference(int sHours, int jHours, int sMinutes, int jMinutes, bool sIsAM, bool jIsAM);

int main() {
    int hours, hours2, minutes, minutes2;
    bool isAM, isAM2;

    cout << "Enter the start time in format HH:MM (AM/PM): ";
    readTime(minutes, hours, isAM);

    cout << "Enter the jump time in format HH:MM (AM/PM): ";
    readTime(minutes2, hours2, isAM2);

    cout << "The result is " << computeDifference(hours, hours2, minutes, minutes2, isAM, isAM2) << " minutes\n";
}

void readTime(int& m, int& h, bool& is) {
    char extra;
    char ap;
    cin >> h >> extra >> m >> ap >> extra;
    if(ap == 'a') {
        is = true;
    }
    else {
        is = false;
    }

}

int computeDifference (int sHours, int jHours, int sMinutes, int jMinutes, bool sIsAM, bool jIsAM) {
    int start, jump;

    start = sMinutes;
    start += sHours*60;
    if (!sIsAM) { start += 12*60; }

    cout << "Start is: " << start << "\n";
    jump = jMinutes;
    jump += jHours*60;
    if (!jIsAM) { jump += 12*60; }

    cout << "Jump is: " << jump << "\n";

    if(start < jump) {
        return (jump - start);
    }
    else {
        return ((1440 - start) + jump);
    }
}
