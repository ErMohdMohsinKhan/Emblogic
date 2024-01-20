#include "headers.h"
#include "declarations.h"
#include "classes.h"

ostream& operator << (ostream& s, Book &buk)
{

//	cout << "Book Details:" << endl;
        s << "Author: " << buk.author << endl;
        s << "Publication Date: " << buk.pblDate.day << "-" << buk.pblDate.month << "-" << buk.pblDate.year << endl;
        s << "Title: " << buk.title << endl;
        s << "Publisher Location: " << buk.pblocn << endl;
        s << "Publisher Name: " << buk.pbName << endl;
	if (buk.state == ON_SHLF)
		s << "Status : On Shelf" << endl;
	else if (buk.state == CHK_OUT)
		s << "Status : Checked Out" << endl;
        return s;
}
