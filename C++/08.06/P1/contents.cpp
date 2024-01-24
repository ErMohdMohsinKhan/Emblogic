#include "headers.h"
#include "classes.h"

string Text::contents()
{
    cout << __func__ << ": Begin" << endl;
    cout << arg << endl;
    cout << __func__ << ": End" << endl;
    return arg;
}
