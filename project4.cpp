/**
    Project 4
    @version 1.0
    @author Cally Sibben

    @description
    Given a start time and an end time, assuming they are within 24 hours
    of eachother, it will calculate the ammount of time between start
    and finish. Something about a time machine? I don't know

    @notes
    Oh my god I could do this whole thing with for loops and it would be
    REALLY FUCKIN' JANKY but it'd work. Don't do that
*/

#include <iostream>

using namespace std;

char ans;
namespace start {
    int hours, minutes;
    bool isAM;
}
namespace jump {
    int hours, minutes;
    bool isAM;
}


int computeDifference(int sHours, int sMinutes, bool sIsAM, int jHours, int jMinutes, bool jIsAM) {
    int result;

    // Check and compute the minutes
    if (sMinutes < jMinutes) {
        result = jMinutes - sMinutes;
    }
    else {
        // how?
    }

    // Check and compute the hours
    if (sHours < jHours) {
        result += (jHours - sHours) * 60;
    }
    else {
        // how?
    }

    // Account for AM/PM
    if (jIsAM == sIsAM) {
        // if they're the same, no biggie
    }
    else if (sIsAM && !jIsAM) {
        // If the start time is AM, and the end is PM, add 12 hours
        // Note, this will work a quarter of the time, doesn't account for
        // sHours > jHours
        result += 12*60
    }
    return result;
}
int main() {
    cout << "Please enter the time you are starting at:\nHours: ";
    cin >> start::hours;
    cout << "Minutes: ";
    cin >> start::minutes;
    cout << "Is it AM(y/n): ";
    cin >> ans;
    if (ans == 'y') { start::isAM = true; } else { start::isAM = false; }

    cout << "\nPlease enter the time you are jumping too:\nHours: ";
    cin >> jump::hours;
    cout << "Minutes: ";
    cin >> jump::minutes;
    cout << "Is it AM(y/n): ";
    cin >> ans;
    if (ans == 'y') { jump::isAM = true; } else { jump::isAM = false; }

    cout << "Differense in minutes: " <<
    computeDifference(start::hours, start::minutes, start::isAM, jump::hours, jump::minutes, jump::isAM);
}
