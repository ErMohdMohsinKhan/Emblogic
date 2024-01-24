#include "headers.h"
#include "class.h"

String::String(const char s[])
{
        cout<<__func__<<" : Zero Arg"<<endl;
        strcpy(str, s);
}
