/*
	CS-1511 Asn 1
	project1.cpp
	Lab 1:00
	Purpose: Calculate the distance an object would fall given the length of time it would fall
	and assuming it accelerates at 32 feet per second without air friction or resistance

	@author Cally Sibben
	@version 1.2
*/


#include <iostream>
#include <cmath>

using namespace std;


int main() {
	// Define variables
	double seconds, distance;

	// Gather user input
	cout << "Please input the number of seconds the object will be falling for: ";
	cin >> seconds;

	// Calculation, uses pow for readability
	distance = pow(seconds, 2)*32/2;

	// Verbose output
	cout << "The object fell " << distance << " feet in " << seconds << " seconds\n";

	return 0;
}
