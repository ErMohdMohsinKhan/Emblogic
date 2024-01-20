#include "headers.h"
#include "declarations.h"
#include "classes.h"

istream& operator >> (istream& s, Periodical& prd)
{
	s.ignore();
	cout<<"Enter author : ";
        s.get(prd.author, SIZE);
        cout<<"Enter Date : ";
        s>>prd.pblDate.day;
        s>>prd.pblDate.month;
        s>>prd.pblDate.year;
        cout<<"Enter the Title : ";
        s.ignore();
        s.get(prd.title, SIZE);
        cout<<"Enter the Periodical Name : ";
        s.ignore();
        s.get(prd.prdName, SIZE);
	cout<<"Enter the Page Range : ";
	s.ignore();
	s>>prd.pr.beg;
	s>>prd.pr.end;
        prd.state = ON_SHLF;
        return s;
}
