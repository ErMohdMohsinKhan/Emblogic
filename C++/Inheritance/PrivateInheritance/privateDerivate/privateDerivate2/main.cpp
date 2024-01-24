#include"classes.h"
#include"headers.h"

int main()
{
 int a;
 //B objB;
  //a=objB.privdataA; //error:not accessible
// a=objB.protdataA; //error:not accesible
// a=objB.pubFunA(); //ok
 
 C objC;
  //a=objC.privdataA; //error:not acce ssible
 // a=objC.protdataA; //error:not accesible
// a=objC.pubFunA(); //error:not accesible
//objC.pubFunC();//ok-objC->public of C->public of A
//objC.pubFunC();//no-objC->public of C->private of A
objC.pubFunC();//no-objC->public of C->protected of A


 return 0;
}
