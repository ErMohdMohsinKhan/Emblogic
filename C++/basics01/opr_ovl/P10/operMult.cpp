#include "headers.h"
#include "class.h"

Mult Mult::operator%(const Mult da) const
{
        int no;
        cout<<"Operator Oveloading"<<endl;
        no = num % da.num;
	cout<<no<<endl;
        return Mult(no);
}
