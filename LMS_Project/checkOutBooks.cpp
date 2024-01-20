#include "headers.h"
#include "classes.h"
#include "declarations.h"
int Book::checkOutBooks()
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
        while(!file.eof())
        {
                posArray[i] = file.tellg();
                posArray[i] = posArray[i] - 2;
                cout<<"Pos : "<<posArray[i]<<endl;

                file.read(reinterpret_cast<char*>(&buk), sizeof(Book));
                pos = file.tellg();
                file.seekg(pos+2, ios::beg);
                cout<<buk.title<<endl;
                if (strcmp(buk.title, title) == 0)  //Comparison
                {
                        cout<<__func__<<" : Title is matched "<<endl<<endl;
                        pos = file.tellg();
                        pos = posArray[i] + 2;
                        file.seekp(pos, ios::beg);
                        pos = file.tellg();
                        if(buk.state == 0)
                        {
                                buk.state = CHK_OUT;
				flag = 1;
                        }
			if (flag == 1)
                        	cout<<__func__<<" : Status is changed successfully to 'Checked Out' state"<<endl;
			else
				cout<<__func__<<" : Status is NOT changed as it is already in 'Checked Out' state"<<endl;
                        file.write(reinterpret_cast<char*>(&buk),sizeof(Book));
                        cout<<buk;
                        return 0;
                }
                if(pos == -1)
                        return 0;
                i++;
        }
        file.close();
        cout<<__func__<<" : End"<<endl;
        return 0;
}
