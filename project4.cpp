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
    
}
