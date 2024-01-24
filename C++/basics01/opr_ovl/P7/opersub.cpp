#include "headers.h"
#include "class.h"

Sub Sub::operator-(const Sub da) const
{
        int no;
        cout<<"Operator Oveloading"<<endl;
        no = num - da.num;
        return Sub(no);
}
