#include "headers.h"
#include "class.h"

Sub::Sub(Sub &d)
{
        cout<<"Copy Const"<<endl;
        num = d.num;
}
