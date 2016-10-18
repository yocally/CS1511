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
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string rank[1000];
string girlnames[1000];
string boynames[1000];

string split(string srcString, char delimeter, )
int main() {
    fstream infile;
    string line;
    infile.open("babynames.txt");

    int i = 0;
    while(getline(infile, line))
    {
        int x = 0;
        while (line[x] != ' ')
        {
            rank[i] += line[x];
            x++;
        }
        x++;
        while (line[x] != ' ')
        {
            boynames[i] += line[x];
        }
        x++;
        while (line[x] != ' ')
        {
            girlnames[i] += line[x];
        }
        i++;
    }
    cout << rank[149] << " " << boynames[149] << " " << girlnames[149];
}
