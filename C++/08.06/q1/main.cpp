#include"headers.h"
#include"classes.h"
int main()
{
  Text t("uname.txt");
  ofstream outfile("uname.txt",ios::binary);
  outfile.write(reinterpret_cast<char*>(&t),sizeof(t));
  return 0;
}
