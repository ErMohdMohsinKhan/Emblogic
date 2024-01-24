#include"headers.h"
#include"class.h"

void Deviation::getValues()
{
	cout<<__func__<<": Begin"<<endl;
	cout<<"Enter values: "<<endl;
	int i, c;
	c=0;
	for(i=0; i<5; i++)
	{
		cin>>ptr[i];
	}
	cout<<"Values entered are : "<<endl;
	for(i=0; i<5; i++)
        {
                cout<<ptr[i]<<"	";
        }
	cout<<endl;
	for(i=0; i<5; i++)
        {
                mean=mean+ptr[i];
		c++;
        }
	mean = mean/c;
	cout<<"Mean : "<<mean<<endl;
	for(i=0; i<5; i++)
        {
                x2 = x2 + ((ptr[i])-mean) * ((ptr[i])-mean);
        }
	cout<<x2<<endl;
	x2 = x2/(c-1);
	cout<<x2<<endl;
	x2 = sqrt(x2);
	cout<<"Standard Deviation : "<<x2<<endl;
	cout<<__func__<<": End"<<endl;

}
