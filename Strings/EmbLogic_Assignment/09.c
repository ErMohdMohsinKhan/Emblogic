#include<stdio.h>
#include<ctype.h>

/*WAP to determine whether a character entered is a Whitespace character or Not*/

int main()
{
        char c;
        printf("Enter a whitespace character\n");
        c = getchar();
        if (isspace(c))
                printf("YES, entered character is a Whitespace character\n");
        else
                printf("NO, entered character is NOT a Whitespace character\n");
        return 0;
}
