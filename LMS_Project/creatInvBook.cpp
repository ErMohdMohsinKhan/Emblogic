#include "headers.h"
#include "classes.h"
#include "declarations.h"
int Book::creatInvBook()
{
	Book buk;
	cin>>buk;	
	int count;
	int size;
	int pos;
	fstream file = Library::openFile();
	/*file.open("BOOK_INV.DAT", ios::app|ios::in| ios::out| ios::binary);
	if(!file)
	{
		cerr << "Error opening the file for writing!" << endl;
		return 1;
	}
	*/
	file.seekg(0, ios::end);
	size = file.tellp();
	file.seekg(8, ios::beg);
	if(size > 0)
	{
		file>>count;  //Reading count from the file
		file.seekp(0, ios::end);
		//pos = file.tellg();
		//cout<<"Pos -> "<<pos<<endl;
		file.write(reinterpret_cast<char*>(&buk), sizeof(Book));
		file<<endl<<endl;
/*		file<<buk.author;
		file<<buk.pblDate.day;
		file<<buk.pblDate.month;
		file<<buk.pblDate.year;
		//file<<'\n';
	*/	//pos = file.tellg();
		//cout<<"Pos -> "<<pos<<endl;
                file.close();
		file.open("BOOK_INV.DAT", ios::in|ios::out| ios::binary);
		count++;
		file.seekp(0, ios::beg);
		//file.write(reinterpret_cast<char*>(&count),sizeof(count));
		file<<"Count : "<<count<<endl<<endl;  // Writing count to the file
		cout<<"Updated Count : "<<count<<endl;
		file.close();
	}
	else
	{
		count = 1;
		//file.write(reinterpret_cast<char*>(&count),sizeof(count));
		file<<"Count : "<<count<<endl<<endl; 
		pos = file.tellg();
		cout<<"Pos -> "<<pos<<endl;
		cout<<"Updated Count -> "<<count<<endl;
		file.write(reinterpret_cast<char*>(&buk), sizeof(Book));
		file<<endl<<endl;
		file.close();
	}
	cout<<__func__<<" : End"<<endl;
	return 0;
}
