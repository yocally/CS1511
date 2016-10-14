/**
    Project 4
    @version 2.0
    @author Cally Sibben

    @description
    The program will read in two times, and output the difference between them

    @notes:
    I originally had this using classes and objects for the times, but when I
    rewrote it I forgot to put them back in, kinda sad about that now since
    computeDifference would be a lot simpler...
*/

#include <iostream>

using namespace std;


// Function declaration so they can be used in the main program

// PRE: Variables are pass by reference
// POST: m will return minutes 0 through 60, h will return hours 1 through 12
void readTime(int& m, int& h, bool& is);
// PRE: hours should be between 1 and 12, minutes should be between 0 and 60
// POST: will return difference of minute between the given s and j times
int computeDifference(int sHours, int jHours, int sMinutes, int jMinutes, bool sIsAM, bool jIsAM);

int main() {
    // Variables for holding the times
    int hours, hours2, minutes, minutes2;
    bool isAM, isAM2;

    // Prompt and read the start time
    cout << "Enter the start time in format HH:MM (AM/PM): ";
    readTime(minutes, hours, isAM);

    // Prompt and read the end time
    cout << "Enter the jump time in format HH:MM (AM/PM): ";
    readTime(minutes2, hours2, isAM2);

    // Output the result
    cout << "The result is " << computeDifference(hours, hours2, minutes, minutes2, isAM, isAM2) << " minutes\n";
}

void readTime(int& m, int& h, bool& is) {
    // Chars are for making the cin process smoother
    char extra;
    char ap;
    // Read time in format HH:MM (AM/PM)
    cin >> h >> extra >> m >> ap >> extra;
    // Checking if they entered AM or PM and changes is acordingly
    if(tolower(ap) == 'a') {
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
