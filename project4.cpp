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
    if (sMinutes < jMinutes) {
        result = jMinutes - sMinutes;
    }
    else {
        // how?
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

    cout << "Differense in minutes: " << computeDifference(start::hours, start::minutes, start::isAM, jump::hours, jump::minutes, jump::isAM);
}
