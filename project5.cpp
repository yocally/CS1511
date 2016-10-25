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
    Rewrite the while loop in main so it doesn't search for the quit character
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

void parseFile()
{
    ifstream inFile("babynames.txt");
    string line;
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
    string build;
    for(int i = 0; i < src.length(); i++)
    {
        build += tolower(src[i]);
    }
    return build;
}
string uInput()
{
    string in;
    cout << "Please enter the name you would like to search for, or '!' to quit: ";
    cin >> in;

    if(in == "!")
    {
        running = false;
    }

    return in;
}

int uSearch(string& target, string a[])
{
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
    parseFile();
    while(running)
    {
        string in = uInput();
        int brank = uSearch(in, boynames);
        int grank = uSearch(in, girlnames);
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
