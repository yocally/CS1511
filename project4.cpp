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

    FINISHED:
    The minutes calculation is fully functional
    The hours calculation is fully functional
    AM PM check
*/

#include <iostream>

using namespace std;

class timeHolder {
public:
    int hours;
    int minutes;
    bool isAM;
};

timeHolder start;
timeHolder jump;

char ans;


int computeDifference(int sHours, int sMinutes, bool sIsAM, int jHours, int jMinutes, bool jIsAM) {
    int result;

    // Check and compute the minutes
    // Minutes should be working flawlessly, except that when given 0 and 0
    // it thinks that it's a full hour
    if ((sMinutes == 0) && (jMinutes == 0)) {
        // Place holder so that nothing happens if they're both 0
    }
    else if (sMinutes < jMinutes) {
        // If the start minutes are less than the jump minutes, you can
        // just do straight math to get the result
        result = jMinutes - sMinutes;
    }
    else {
        // In the case that the start minutes are greather than the jump
        // minutes, I do not remember how this works
        result = (60 - sMinutes) + jMinutes;
    }


    // Check and compute the hours
    if ((sHours == 0) && (jHours == 0)) {
        // Place holder so that nothing happens if they're both 0
    }
    else if (sHours < jHours) {
        // If the start minutes are less than the jump minutes, you can
        // just do straight math to get the result
        result += (jHours - sHours);
    }
    else {
        // In the case that the start minutes are greater than the jump
        // minutes, I do not remember how this works
        result += ((12 - sHours) + jHours);
    }


    // Account for AM/PM
    if (jIsAM == sIsAM) {
        // if they're the same, no biggie
    }
    else {
        // Because it doesn't matter if we're going am to pm, or
        // pm to am, we're still jumping ahead 12 hours
        result += 12*60;
    }
    return result;
}


int main() {
    cout << "Please enter the time you are starting at:\nHours: ";
    cin >> start.hours;
    cout << "Minutes: ";
    cin >> start.minutes;
    cout << "Is it AM(y/n): ";
    cin >> ans;
    if (ans == 'y') { start.isAM = true; } else { start.isAM = false; }

    cout << "\nPlease enter the time you are jumping too:\nHours: ";
    cin >> jump.hours;
    cout << "Minutes: ";
    cin >> jump.minutes;
    cout << "Is it AM(y/n): ";
    cin >> ans;
    if (ans == 'y') { jump.isAM = true; } else { jump.isAM = false; }

    cout << "Differense in minutes: " <<
    computeDifference(start.hours, start.minutes, start.isAM, jump.hours, jump.minutes, jump.isAM);
}
