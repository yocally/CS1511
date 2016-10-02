/**
    Project 3
    @version 1.2
    @author Cally Sibben

    @description
    Door guessing game, say you have $doors number of doors,
    behind one of them is a prize, the other doors have nothing.
    In the game, once you pick a door, you are shown one of the doors
    that holds nothing behind it and you are given the choice to switch
    your guess or hold true, this simulates that for $doors and gives you
    the results
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
    // Variable declaration
    int correct = 0, incorrect = 0;
    int correct2 = 0, incorrect2 = 0;
    int doors;
    // Seed the generator
    srand(time(0));

    // Get the amount of doors involved in this game
    cout << "How many doors are there: ";
    cin >> doors;

    // For loop generates the doors and pick one
    for (int i = 0; i < 10000; i++) {
        int door = rand() % doors + 1;
        int guess = rand() % doors + 1;
        int door2 = rand() % (doors - 1) + 1;
        int guess2 = rand() % (doors - 1) + 1;
        if (door == guess) { correct++; } else { incorrect++; }
        if (door2 == guess2) { correct2++; } else { incorrect2++; };
    }

    // Output the stats
    cout << "Stats for staying with your guess:\n";
    cout << "Correct guesses: " << correct << "\nIncorrect guesses: " << incorrect << "\n\n";
    cout << "Stats for switching doors:\n";
    cout << "Correct guesses: " << correct2 << "\nIncorrect guesses: " << incorrect2 << "\n";

    return 0;
}
