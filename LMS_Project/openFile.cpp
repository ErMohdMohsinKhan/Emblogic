#include "headers.h"
#include "classes.h"
#include "declarations.h"
fstream Library::openFile()
{
	fstream file;
	char name[20];
	cout<<__func__<<" : Enter Book File name"<<endl;
	cin>>name;
	cout<<__func__<< " : Name Entered "<<name<<endl;
	file.open(name, ios::app|ios::in| ios::out| ios::binary);
        if(!file)
        {
                cerr << "Error opening the file for writing!" << endl;
                exit(1);
        }
	return file;
}
