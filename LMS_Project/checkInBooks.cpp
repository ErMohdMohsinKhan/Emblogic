#include "headers.h"
#include "classes.h"
#include "declarations.h"
int Book::checkInBooks()
{
	cout<<__func__<<" : Begin"<<endl;
	Book buk;
	int pos, count, i;
	i = 0;
	int flag = 0;
	int posArray[10];
	char title[SIZE];
	memset(title, '\0', SIZE);
	char author[SIZE];
	memset(author, '\0', SIZE);
	fstream file;
        file.open("BOOK_INV.DAT", ios::in|ios::out|ios::binary);
        if (!file)
        {
                cerr << "Error opening the file for reading!" << endl;
                return 1;
	}
	file.read(reinterpret_cast<char*>(&count),sizeof(count));
        file.seekg(8, ios::beg);
	file>>count;
	cout<<__func__<<": Count -> "<<count<<endl;
	file.seekg(11, ios::beg);
	cout<<__func__<<" : Please enter Title of the Book : "<<endl;
	cin.ignore();
	cin.get(title, SIZE);
	cin.ignore();
	cout<<__func__<<" : Please enter Author of the Book : "<<endl;
	cin.get(author, SIZE);
	cin.ignore();
	for(i=count; i>0; i--)
        {
                pos = file.tellg();
                file.read(reinterpret_cast<char*>(&buk), sizeof(Book));
                file.seekg(2, ios::cur);
                if (strcmp(buk.title, title) == 0)
                {
                        cout<<__func__<<" : Title is matched "<<endl;
                       break;
                }
        }
        if(buk.state == 1)
        {
                buk.state = ON_SHLF;
                flag = 1;
        }
        if(flag == 1)
                cout<<__func__<<" : Status is changed successfully to 'On Shelf' state"<<endl;
        else
                cout<<__func__<<" : Status is NOT changed as it is already in 'On Shelf' state"<<endl;
        file.seekp(pos, ios::beg);
        file.write(reinterpret_cast<char*>(&buk),sizeof(Book));
        cout<<buk;

        file.close();

	cout<<__func__<<" : End"<<endl;
        return 0;
}
