#include <iostream>
using namespace std;

string decimaltoBinary(int decimal)
{
	string binary = "";
	int rem;
	while(decimal > 0)
	{
		rem = decimal%2;
		binary = to_string(rem) + binary;
		decimal = decimal/2;
	}
	return binary;
}
int main()
{
	int num;
	cout<<"Enter a decimal number : ";
	cin >> num;
	string conv;
	conv = decimaltoBinary(num);
	cout<<"Binary Equ : "<<conv<<endl;
	return 0;
}
