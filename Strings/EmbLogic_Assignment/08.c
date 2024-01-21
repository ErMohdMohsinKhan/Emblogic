#include<stdio.h>
#include<string.h>
#include <ctype.h>

/*WAP to determine whether a character entered is in Upper case or Not*/

int main()
{
        char c;
        printf("Enter a character\n");
        c = getchar();
        if (isupper(c))
                printf("YES, entered character is in uppercase\n");
        else
                printf("NO, entered character is NOT in uppercase\n");
        return 0;
}
