#include "headers.h"
#include "classes.h"
#include "declarations.h"
int Periodical::displayPer()
{
	Periodical prd;
	cout<<__func__<<" : Begin"<<endl;
        fstream file;
        file.open("PRD_INV.DAT", ios::in|ios::binary);
        if (!file)
        {
                cerr << "Error opening the file for reading!" << endl;
                return 1;
        }
	int count;
	int pos;
        file.read(reinterpret_cast<char*>(&count),sizeof(count));
        file.seekg(8, ios::beg);
        file>>count;
        cout<<__func__<<": Count -> "<<count<<endl;
        file.seekg(11, ios::beg);
        cout<<"Periodical Details are as follows : "<<endl<<endl;
        while(!file.eof())
        {
                file.read(reinterpret_cast<char*>(&prd), sizeof(Periodical));
                pos = file.tellg();
		file.seekg(pos+2, ios::beg);
		if(pos == -1)
                        break;
                cout<<prd<<endl;
        }
	cout<<__func__<<" : End"<<endl;
        file.close();
        return 0;
}
