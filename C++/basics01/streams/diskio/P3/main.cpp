#include "headers.h"
#include "class.h"
int main()
{
	ofstream output("of.txt");  //creates file
	output<<"Hello!\n";
	output<<"Mr Khan\n";
	output<<"One of the centi-billionare of the World!\n";
	return 0;
}
