// binio.cpp
// binary input and output with integers
#include <fstream>
//for file streams
#include <iostream>
using namespace std;
const int MAX = 100;
//size of buffer
int buff[MAX];
//buffer for integers
int main()
{
	int j;
for(j=0; j<MAX; j++)
buff[j] = j;
//fill buffer with data
//(0, 1, 2, ...)
//create output stream
ofstream os(“edata.dat”, ios::binary);
//write to it
os.write( reinterpret_cast<char*>(buff), MAX*sizeof(int) );
os.close();
//must close it
for(j=0; j<MAX; j++)
buff[j] = 0;
//erase buffer
//create input stream
ifstream is(“edata.dat”, ios::binary);
//read from it
is.read( reinterpret_cast<char*>(buff), MAX*sizeof(int) );
for(j=0; j<MAX; j++)
//check data
if( buff[j] != j )
{ cerr << “Data is incorrect\n”; return 1; }
cout << “Data is correct\n”;
return 0;
}