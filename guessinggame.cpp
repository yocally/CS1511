/*
    Guessing Game.cpp
    @version 1.0
    @author Cally Sibben

    @description:
    Just a quick little program that generates a random number, then
    makes you guess it.
*/

#include <iostream>
#include <cstdlib>

using namespace std;


int main() {
    // Seed and generate the number
    srand(time(0));
    int rnum = rand() % 100 + 1;
    // Input variable that holds the guess
    int guess;

    cout << "A random number has been generated for you to guess\n";
    // While loop that prompts for guess and checks against the random number until correct
    while (true) {
        cout << "Please enter your guess: ";
        cin >> guess;

        if(guess < rnum) {
            cout << "Too low\n";
        }
        else if(guess > rnum) {
            cout << "Too high\n";
        }
        else if(guess == rnum) {
            cout << "That is correct!\n";
            break;
        }
        else {
            cout << "Something went horribly wrong, your guess was not too high, too low or equal to the number\n";
            break;
        }
    }

    cout << "The program is done\n";
    return 0;
}
