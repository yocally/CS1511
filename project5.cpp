/**
    Project 5
    @author Cally Sibben
    @version 1.0

    @description
    The program should be able to read in from a file of x baby names,
    space sorted for example: "1 Waldo Alice" where it has first, the rank
    of the name, then the male and then the female for that rank. The program
    should then be able to take user input for a name, then print out the ranking
    for both the male and female for that name

    @notes
    So aparently there is no split string function, and that's pretty terrible. If it was up to
    me, I'd call a python file just for the split function.

    @TODO
    I can probably use pointers to pass an array to a function
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string iRank[999];
string boynames[999];
string girlnames[999];
bool running = true;
// string split(string srcString, char delimeter, int index)
string split(string& src, char delim, int index)
{
    // Oh boy a split function, because this can't be redone to be a thousand time better
    // Alright, x holds the value of the index that we're currently on, i iterates through the string
    // build holds the current string of the given index
    int x = 0;
    string build;

    // Grand old for loop iterates through the string char by char
    // Literally have no idea how this works, probably should've documented as I wrote
    for (int i = 0; i < src.length(); i++)
    {
        if(src.at(i) == delim)
        {
            if (x == index)
            {
                break;
            }
            x++;
            build = "";
            continue;
        }
        build += src.at(i);
    }
    // Returns the string we were looking for
    return build;
}

void parseFile()
{
    // this is the file object, can't actually figure out how to pass a string into the file name, not sure why
    // Woo it's the haunted compiler that can't convert string to string
    // Line is to humor the getline function later on, holds the current line of the file we're on
    ifstream inFile("babynames.txt");
    string line;
    // Could turn this into a for loop, don't really want to, sue me. x is just so we properly iterate through
    // the arrays we're building
    int x = 0;
    while(getline(inFile, line))
    {
        iRank[x] = split(line, ' ', 0);
        boynames[x] = split(line, ' ', 1);
        girlnames[x] = split(line, ' ', 2);
        x++;
    }
}

string lower(string& src)
{
    // goes through a string and makes every character lower, I use the += operator because I forgot how to
    // create a string of a given size. Besides, functionality shouldn't be affected, right?
    string build;
    for(int i = 0; i < src.length(); i++)
    {
        build += tolower(src[i]);
    }
    return build;
}

string uInput()
{
    // Didn't want this code cluttering up the while loop so here it is, I hope this doesn't need explaining
    string in;
    cout << "Please enter the name you would like to search for, or '!' to quit: ";
    cin >> in;

    return in;
}

int uSearch(string& target, string a[])
{
	// Pretty standard, if the given target is found it will return the index of the target within the given array, if not found it returns -1
    int index = -1;

    for(int i = 0; i < 999; i++)
    {
        if(lower(target) == lower(a[i]))
        {
            index = i;
        }
    }
    return index;
}

int main() {
	// Parse the file to populate the arrays
    parseFile();
	
	// Main while loop for the program, keeps it running so you can search for multiple targets
    while(running)
    {
		// Takes user input
        string in = uInput();

		// Checks to see if the quit character was passed, if so it will set the running bool to false and continue the loop to skip the searches
        if(in == "!")
        {
            running = false;
            continue;
        }
		
		// Searches both the arrays for the target
        int brank = uSearch(in, boynames);
        int grank = uSearch(in, girlnames);
		
		// Output the results accordingly
        if(brank == -1)
        {
            cout << in << " is not ranked among the top 1000 boy names\n";
        }
        else
        {
            cout << in << " is ranked " << brank << " in popularity among the boys\n";
        }

        if(grank == -1)
        {
            cout << in << " is not ranked among the top 1000 girl names\n";
        }
        else
        {
            cout << in << " is ranked " << grank << " in popularity among the girls\n";
        }
    }
}