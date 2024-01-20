#include "headers.h"
#include "classes.h"
#include "declarations.h"
int Dvd::displayDvd()
{
	Dvd dvd;
	cout<<__func__<<" : Begin"<<endl;
        fstream file;
        file.open("DVD_INV.DAT", ios::in|ios::binary);
        if (!file)
        {
                cerr << "Error opening the file for reading!" << endl;
                return 1;
        }
	int count;
	int pos;
	char ch;
        file.read(reinterpret_cast<char*>(&count),sizeof(count));
        file.seekg(8, ios::beg);
        file>>count;
        cout<<__func__<<": Count -> "<<count<<endl;
        file.seekg(11, ios::beg);
        cout<<"DVD Details are as follows : "<<endl<<endl;
        while(!file.eof())
        {
                file.read(reinterpret_cast<char*>(&dvd), sizeof(Dvd));
                pos = file.tellg();
		file.seekg(pos+2, ios::beg);
		if(pos == -1)
                        break;
                cout<<dvd<<endl;
        }
	file.seekg(11, ios::beg);
/*	while(!file.eof())
        {
                file>>ch;
                pos = file.tellg();
                cout<<"Pos : "<<pos<<" : "<<ch<<endl;
                if(pos == -1)
                        break;
        }
*/	cout<<__func__<<" : End"<<endl;
        file.close();
        return 0;
}
