#include "headers.h"
#include "declarations.h"
#include "classes.h"

ostream& operator << (ostream& s, Dvd &dvd)
{

        s << "Artist: " << dvd.artist << endl;
        s << "Title: " << dvd.title << endl;
        s << "Label: " << dvd.label << endl;
	s << "Launch Date: " << dvd.lnchDate.day << "-" << dvd.lnchDate.month << "-" << dvd.lnchDate.year << endl;
	if(dvd.state == CHK_OUT)
		s << "Status : Checked Out" << endl;
	else if(dvd.state == ON_SHLF)
		s << "Status : On Shelf" << endl;
        return s;
}
