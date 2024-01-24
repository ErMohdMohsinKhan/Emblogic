#include"headers.h"
#include"classes.h"
string Text::contents()
{
  Text t("hello world");
  cout<<__func__<<":Begin"<<endl;
  cout<<t.arg<<endl;
  cout<<__func__<<":End"<<endl;
  return t.arg;
}
