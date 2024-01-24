#include "headers.h"
#include "classes.h"
Text::Text(string fn) : arg("")
{
    ifstream infile(fn); //'ifstream'is a class provided by the C++ standard library for reading from files 'infile(fn)' attempts to open the file whose name is given by the string fn.

    if (infile.is_open())  //is_open() function is a member function of the ifstream class. It is used to check whether a file has been successfully opened.
    {
        // Read the contents of the file into the 'arg' member variable
        char c;
        while (infile.get(c))
        {
            arg = arg+c;
        }
        infile.close();
    }
    else
    {
        cerr << "Error: Unable to open file '" << fn << "'" << endl;
    }
}
