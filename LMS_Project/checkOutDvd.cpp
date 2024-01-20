#include "headers.h"
#include "classes.h"
#include "declarations.h"
int Dvd::checkOutDvd()
{
	cout<<__func__<<" : Begin"<<endl;
	Dvd dvd;
	int pos, count, i;
        i = 0;
	int flag = 0;
        int posArray[10];
        char title[SIZE];
        memset(title, '\0', SIZE);
        char artist[SIZE];
        memset(artist, '\0', SIZE);
        fstream file;
        file.open("DVD_INV.DAT", ios::in|ios::out|ios::binary);
        if (!file)
        {
                cerr << "Error opening the file for reading!" << endl;
                return 1;
        }
        file.seekg(8, ios::beg);
        file>>count;
        cout<<__func__<<": Count -> "<<count<<endl;
        file.seekg(2, ios::cur);
        cout<<__func__<<" : Please enter Title : "<<endl;
        cin.ignore();
        cin.get(title, SIZE);
        cin.ignore();
        cout<<__func__<<" : Please enter Artist name : "<<endl;
        cin.get(artist, SIZE);
        cin.ignore();
	i = count;
	pos = file.tellg();
	cout<<"Tile entered "<<title<<endl;
	for(i=count; i>0; i--)
	{
		pos = file.tellg();
		file.read(reinterpret_cast<char*>(&dvd), sizeof(Dvd));
		file.seekg(2, ios::cur);
		if (strcmp(dvd.title, title) == 0)
		{
			cout<<__func__<<" : Title is matched "<<endl;
		       break;
		}
	}
        if(dvd.state == 0)
        {
        	dvd.state = CHK_OUT;
		flag = 1;
        }
	if(flag == 1)
                cout<<__func__<<" : Status is changed successfully to 'Checked Out' state"<<endl;
        else
                cout<<__func__<<" : Status is NOT changed as Periodical is already in 'Checked Out' state"<<endl;
	file.seekp(pos, ios::beg);
        file.write(reinterpret_cast<char*>(&dvd),sizeof(Dvd));
        cout<<dvd;
		
        file.close();
        cout<<__func__<<" : End"<<endl;
        return 0;
}
