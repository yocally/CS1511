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

string iRank[1000];
string girlnames[1000];
string boynames[1000];
string test = "Hello World test";

// string split(string srcString, char delimeter, )
string split(string& src, char delim, int index)
{
    int x = 0;
    string build;
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
    return build;
}

int main() {

}
