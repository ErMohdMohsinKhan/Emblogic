#include "headers.h"
#include "classes.h"
#include "declarations.h"
int Book::displayBooks()
{
	Book buk;
	char ch;
	int pos;
	cout<<__func__<<" : Begin"<<endl;
	fstream file;
	file.open("BOOK_INV.DAT", ios::in|ios::binary);
    	if (!file)
	{
        	cerr << "Error opening the file for reading!" << endl;
        	return 1;
    	}
/*	while(!file.eof())
	{
		file>>ch;
		pos = file.tellg();
		cout<<"Pos : "<<pos<<" : "<<ch<<endl;
	}
	file.close();
	file.open("BOOK_INV.DAT", ios::in|ios::binary);
        if (!file)
         {
                  cerr << "Error opening the file for reading!" << endl;
                  return 1;
          }
*/
	int count;
	file.read(reinterpret_cast<char*>(&count),sizeof(count));
	file.seekg(8, ios::beg);
	file>>count;
	cout<<__func__<<": Count -> "<<count<<endl;
	file.seekg(11, ios::beg);
	cout<<"Book Details are as follows : "<<endl<<endl;
	while(!file.eof())
	{
		file.read(reinterpret_cast<char*>(&buk), sizeof(Book));
		pos = file.tellg();
	//	cout<<"Pos : "<<pos<<endl;
		file.seekg(pos+2, ios::beg);
		if(file.eof())
			break;
		if(pos == -1)
			break;
		cout<<buk<<endl;
	}
/*	while(!file.eof())
        {
		file>>ch;
                pos = file.tellg();
                cout<<"Pos : "<<pos<<" : "<<ch<<endl;
		if(pos == -1)
			break;
	}*/
	cout<<__func__<<" : End"<<endl;
    	file.close();
	return 0;
}
