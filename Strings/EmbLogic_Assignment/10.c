#include<stdio.h>
#include<ctype.h>

/*WAP to convert an Upper case character to a Lower case character and leaves all other characters unchanged*/

char convert(char); //Forward declaration
int main()
{
        char c;
        printf("Enter the character\n");
        c = getchar();
        c = convert(c);
        printf("Conveted : %c\n", c);
        return 0;
}

char convert(char d)
{
        if (isupper(d))
                return (d+32);
        else
        {
                printf("Entered character is already in Lower case\n");
                return d;
        }
}
