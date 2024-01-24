#include "headers.h"
#include "class.h"

int& Array::operator[](int n)
{
        if(n<0 || n >= 10)
        {
                cout<<"Index out of bounds"<<endl;
                        exit(1);
        }
        return arr[n];
}

