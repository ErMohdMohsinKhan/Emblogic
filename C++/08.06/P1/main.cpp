#include "headers.h"
#include "classes.h"
int main()
{
    Text t("uname.txt");
    cout << "Contents of the file:" << endl;
    cout << t.contents() << endl;

    return 0;
}
