#include <iostream>
using namespace std;
#include <vector>
int main ()
{
	vector <int> Vectora(10);
	vector <int> :: iterator it_begin = Vectora.begin();
	vector <int> :: iterator it_end = Vectora.end();
	vector <int> :: reverse_iterator it_rbegin = Vectora.rbegin();
	vector <int> :: reverse_iterator it_rend = Vectora.rend();
	/*Filling vector with numbers*/
	for(int i=0; i<10; i++)
	{
		Vectora[i] = i*5;
	}
	cout << endl;
	/*Print vector */
	for(vector <int> :: iterator it = it_begin; it<it_end; it++)
	{
		cout<<*it<<" ";
	}
	cout << endl;
	for(vector <int> :: reverse_iterator it = it_rbegin; it<it_rend; it++)
	{
		cout<<*it<<" ";
	}
	cout << endl;
	return 0;
}
