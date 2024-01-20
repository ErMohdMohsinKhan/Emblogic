#include "headers.h"
#include "classes.h"
#include "declarations.h"
int Dvd::creatInvDvd()
{
	Dvd dvd;
	cin>>dvd;
        int count;
        int size;
        int pos;
        fstream file;
	file.open("DVD_INV.DAT", ios::app|ios::in| ios::out| ios::binary);
        if(!file)
        {
                cerr << "Error opening the file for writing!" << endl;
                return 1;
        }

        file.seekg(0, ios::end);
        size = file.tellp();
        file.seekg(8, ios::beg);
        if(size > 0)
        {
                file>>count;  //Reading count from the file
                file.seekp(0, ios::end);
		file.write(reinterpret_cast<char*>(&dvd), sizeof(Dvd));
                file<<endl<<endl;
		file.close();
                file.open("DVD_INV.DAT", ios::in|ios::out| ios::binary);
                count++;
                file.seekp(0, ios::beg);
		file<<"Count : "<<count<<endl<<endl;  // Writing count to the file
                cout<<"Updated Count : "<<count<<endl;
                file.close();
	}
	else
	{
		count = 1;
                file<<"Count : "<<count<<endl<<endl;
                pos = file.tellg();
                cout<<"Pos -> "<<pos<<endl;
                cout<<"Updated Count -> "<<count<<endl;
                file.write(reinterpret_cast<char*>(&dvd), sizeof(Dvd));
                file<<endl<<endl;
                file.close();
	}
	cout<<__func__<<" : End"<<endl;
        return 0;
}

