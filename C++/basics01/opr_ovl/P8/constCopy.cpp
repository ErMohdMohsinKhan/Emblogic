#include "headers.h"
#include "class.h"

Mult::Mult(Mult &d)
{
        cout<<"Copy Const"<<endl;
        num = d.num;
}
