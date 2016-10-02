/**
	Project 2
	@version 2.0
	@author Cally Sibben

	@description:
	Revised version of 1.0, I started from scratch so I thought a major version was in order
	First of all, and I don't know why, but you can't do this all in inches, or at least I
	couldn't, you MUST convert the radius to feet rather then depth to inches for this to
	spit out anything coherent, so that's what I did. I'm not sure how accurate this will
	get on that division, but whatever
*/


#include <iostream>

using namespace std;

int main() {
	// Variables
	double depth, radius, gallons;

	// Constants
	const double PI = 3.14159;
	const double MAGIC = 7.48;

	// Gather the data
	cout << "What is the radius of the well in inches: ";
	cin >> radius;
	cout << "What is the depth of the well in feet: ";
	cin >> depth;
	if ((radius < 0) || (depth < 0)) {
		cout << "Error: That's not how wells work\n";
		return 0;
	}

	// This one liner works nicely for the math
	gallons = (PI * ((radius/12)*(radius/12)) * depth) * MAGIC;

	// Nice verbose output
	cout << "For a well " << depth << " feet deep and a radius of " << radius <<
	" inches it will hold " << gallons << " gallons of water\n";

	return 0;
}
