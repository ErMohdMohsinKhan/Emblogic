#include"headers.h"
#include"declarations.h"
#include"classes.h"
Dvd::Dvd()
{
//	cout<<__func__<<" : Begin (Zero Arg Const)"<<endl;
/*	artist = new char[SIZE];
        if(!artist)
        {
                cerr<<__func__<<"Error : Memory Allocation Failure"<<endl;
        }
        memset(artist, '\0', SIZE);
	title = new char[SIZE];
        if(!title)
        {
                cerr<<__func__<<"Error : Memory Allocation Failure"<<endl;
        }
        memset(title, '\0', SIZE);
	label = new char[SIZE];
        if(!label)
        {
                cerr<<__func__<<"Error : Memory Allocation Failure"<<endl;
        }
        memset(label, '\0', SIZE);*/
	lnchDate.day = 0;
        lnchDate.month = 0;
        lnchDate.year = 0;
	state = ON_SHLF;
//	cout<<__func__<<" : End (Zero Arg Const)"<<endl;
}
