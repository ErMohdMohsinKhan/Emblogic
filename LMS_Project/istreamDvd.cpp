#include "headers.h"
#include "declarations.h"
#include "classes.h"

istream& operator >> (istream& s, Dvd &dvd)
{
	s.ignore();
        cout<<"Enter artist : ";
        s.get(dvd.artist, SIZE);
	cout<<"Enter the Title : ";
	s.ignore();
	s.get(dvd.title, SIZE);
	cout<<"Enter the Label : ";
	s.ignore();
	s.get(dvd.label, SIZE);
        cout<<"Enter Date : ";
	s>>dvd.lnchDate.day;
	s>>dvd.lnchDate.month;
	s>>dvd.lnchDate.year;
	dvd.state = CHK_OUT;
        return s;
}
