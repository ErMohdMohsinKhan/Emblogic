#include "headers.h"
#include "declarations.h"
#include "classes.h"

istream& operator >> (istream& s, Book &buk)
{
	s.ignore();
        cout<<"Enter author : ";
        s.get(buk.author, SIZE);
        cout<<"Enter Date : ";
	s>>buk.pblDate.day;
	s>>buk.pblDate.month;
	s>>buk.pblDate.year;
	cout<<"Enter the Title : ";
	s.ignore();
	s.get(buk.title, SIZE);
	cout<<"Enter the publication Location : ";
	s.ignore();
	s.get(buk.pblocn, SIZE);
	cout<<"Enter the publication Name : ";
	s.ignore();
	s.get(buk.pbName, SIZE);
	buk.state = ON_SHLF;
//	s>>buk.state<<"ON_SHELF";
	//s>>buk.state;
	//s.get(buk.state, SIZE);
        return s;
}
