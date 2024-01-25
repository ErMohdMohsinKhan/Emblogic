#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int sortTot(student **st, int *numStudents)
{
    printf("%s : Begin\n", __func__);
    char res;
    int i, j;
    printf("%s : Do you want to Sort Total in Descending Order (y/n)\n", __func__);
    scanf(" %c", &res);
    if (res == 'y')
    {
        for (j = 0; j < *numStudents - 1; j++)
        {
            for (i = 0; i < *numStudents - 1 - j; i++)
            {
                if ((*st)[i].total < (*st)[i + 1].total)
                {
                    student temp = (*st)[i];
                    (*st)[i] = (*st)[i + 1];
                    (*st)[i + 1] = temp;
                }
            }
        }
    }

    printf("%s : End\n", __func__);
    return 0;
}

