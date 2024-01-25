#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int minSc (student *st, int numStudents)
{
        printf("%s : Begin\n", __func__);
        int i =0;
        int var = 0;
        float lowest = (st)[0].total;
        char name[20];
        for (i=1; i<numStudents; i++)
        {
                if (lowest > (st)[i].total)
                {
                        lowest = (st)[i].total;
                        var = i;
                }
        }

        printf("%s : Lowest total is %.2f of %s\n", __func__, lowest, (st)[var].stname);
        printf("%s : End\n", __func__);
        return 0;
}
