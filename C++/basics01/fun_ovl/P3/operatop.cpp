#include "headers.h"
#include "class.h"

Counter Counter::operator++()
{
        cout<<"Begin Operator Overloading Function"<<endl;
	Counter temp;  //make a temporary Counter
        ++count;
	temp.count = count;

        cout<<"End Operator Overloading Function"<<endl;
        return temp;
}

