#include "headers.h"
#include "declarations.h"
#include "classes.h"

ostream& operator << (ostream& s, Periodical& prd)
{

//	cout << "Book Details:" << endl;
        s << "Author: " << prd.author << endl;
        s << "Publication Date: " << prd.pblDate.day << "-" << prd.pblDate.month << "-" << prd.pblDate.year << endl;
        s << "Title: " << prd.title << endl;
        s << "Periodical Name: " << prd.prdName << endl;
        s << "Page Range: " << prd.pr.beg<<"-"<< prd.pr.end << endl;
	if (prd.state == ON_SHLF)
                s << "Status : On Shelf" << endl;
        else if (prd.state == CHK_OUT)
                s << "Status : Checked Out" << endl;
        return s;
}
