/**
    Project 3
    @version 1.2
    @author Cally Sibben

    @description
    Door guessing game, say you have $door_count number of doors,
    behind one of them is a prize, the other doors have nothing.
    In the game, once you pick a door, you are shown one of the doors
    that holds nothing behind it and you are given the choice to switch
    your guess or hold true, this simulates that for $door_count and gives you
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
    int door_count, simulations;
    // Seed the generator
    srand(time(0));

    // Get the amount of doors involved in this game
    cout << "How many doors are there: ";
    cin >> door_count;
    cout << "How many simulations do you want to run: ";
    cin >> simulations;

    // For loop generates the doors and pick one
    for (int i = 0; i < simulations; i++) {
        int door = rand() % door_count + 1;
        int guess = rand() % door_count + 1;
        // Generate a door and guess with the range one less then the original
        // door_count
        int door2 = rand() % (door_count - 1) + 1;
        int guess2 = rand() % (door_count - 1) + 1;
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
