#include "headers.h"
#include "class.h"

Counter::Counter(Counter &obj)
{
        cout<<"Copy Arg Constructor"<<endl;
        obj.count = count;
      //  cout<<"End Copy Arg Constructor"<<endl;
}
