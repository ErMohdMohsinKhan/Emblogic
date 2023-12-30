#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

char *getString()
{
        char *loc = (char *)malloc(20 * sizeof(char));
        printf("Enter a string : \n");
        fgets(loc, 20, stdin);
        len = strlen(loc);
        loc[len - 1] = '\0';
        printf("You entered string : %s\n", loc);
        return loc;
}
