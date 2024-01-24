#include "declarations.h"
using namespace std;
string GetCurrentWorkingDir(void)
{
	char buff[50];
	GetCurrDir(buff, 50);
	string current_working_dir(buff);
	return current_working_dir;
}
