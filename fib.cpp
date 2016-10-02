/**
    Fibonacci
    @version 1.0
    @author Cally Sibben

    @description
    Generates the n numbers of the Fibonacci sequence
*/
#include <iostream>

using namespace std;

int main() {
    // Define variables
    // Double for bigger numbers
    double term1;
    double term2;
    int n;
    double newterm;
    // Read input
    cout << "How many terms would you like: ";
    cin >> n;

    // Screen out non positive numbers
    if (n < 1) {
        cout << "Please enter a positive number that is not \n";
        return 0;
    }

    // Initialize terms so it actually works
    term2 = 1;
    term1 = 0;

    // Little bit of code because you can't make this work within
    // the for loop
    cout << term1 << " " << term2 << " ";

    // Calculate finobacci n times, subtract 2 because I already
    // put in the first two terms above
    for (int i = 0; i < n - 2; i++) {
        newterm = term1 + term2;
        term1 = term2;
        term2 = newterm;
        cout << newterm << " ";
    }
}
