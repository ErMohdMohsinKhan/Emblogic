#include"headers.h"
#include"declarations.h"
#include"classes.h"
Periodical::Periodical()
{
//	cout<<__func__<<" : Begin (Zero Arg Const)"<<endl;
/*	author = new char[SIZE];
        if(!author)
        {
                cerr<<__func__<<"Error : Memory Allocation Failure"<<endl;
        }
        memset(author, '\0', SIZE);
	pblDate.day = 0;
        pblDate.month = 0;
        pblDate.year = 0;
        title = new char[SIZE];
        if(!title)
        {
                cerr<<__func__<<"Error : Memory Allocation Failure"<<endl;
        }
        memset(title, '\0', SIZE);
        prdName = new char[SIZE];
        if(!prdName)
        {
                cerr<<__func__<<"Error : Memory Allocation Failure"<<endl;
        }
        memset(prdName, '\0', SIZE);*/
	pblDate.day = 0;
        pblDate.month = 0;
        pblDate.year = 0;
	pr.beg = 0;
	pr.end = 0;
	state = ON_SHLF;
//	cout<<__func__<<" : End (Zero Arg Const)"<<endl;
}
