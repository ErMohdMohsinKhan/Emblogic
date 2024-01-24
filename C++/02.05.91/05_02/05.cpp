#include <iostream>
using namespace std;

string decimalToOctal(int decimalNumber)
{
  string octalNumber = "";
  int remainder;

  while (decimalNumber > 0)
  {
    remainder = decimalNumber % 8;
    octalNumber = to_string(remainder) + octalNumber;
    decimalNumber /= 8;
  }

  return octalNumber;
}

int main()
{
  int decimalNumber;
  cout << "Enter a decimal number: ";
  cin >> decimalNumber;

  string octalEquivalent = decimalToOctal(decimalNumber);
  cout << "Octal equivalent: " << octalEquivalent << endl;

  return 0;
}
