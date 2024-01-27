#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int updRec(student *st, int numStudents)
{
    printf("%s : Begin\n", __func__);
    int rec;
    printf("%s : Enter the Record number between 1 to %d be updated\n", __func__, numStudents);
    scanf("%d", &rec);
    int i;
    int indexToUpdate = -1;
    for (i = 0; i < numStudents; i++)
    {
        if (st[i].stnumber == rec)
        {
            printf("%s : Record found ..... \n", __func__);
            indexToUpdate = i;
            break;
        }
    }
    if (indexToUpdate != -1)
    {
        printf("%s : Enter the fresh value\n", __func__);
        printf("%s : Enter student number\n", __func__);
        scanf("%d", &st[indexToUpdate].stnumber);
        getchar();
        printf("%s : Enter student name\n", __func__);
        fgets(st[indexToUpdate].stname, 20, stdin);
        int len = strlen(st[indexToUpdate].stname);
        st[indexToUpdate].stname[len - 1] = '\0';
        printf("%s : Enter sex (M/F)\n", __func__);
        scanf(" %c", &st[indexToUpdate].sex);
        printf("%s : Enter Quiz1 Marks (out of 5.0)\n", __func__);
        scanf("%f", &st[indexToUpdate].quiz1);
        printf("%s : Enter Quiz2 Marks (out of 5.0)\n", __func__);
        scanf("%f", &st[indexToUpdate].quiz2);
        printf("%s : Enter Assignment Marks (out of 10.0)\n", __func__);
        scanf("%f", &st[indexToUpdate].assignment);
        printf("%s : Enter Midterm Marks (out of 20.0)\n", __func__);
        scanf("%f", &st[indexToUpdate].midterm);
        printf("%s : Enter Final Marks (out of 60.0)\n", __func__);
        scanf("%f", &st[indexToUpdate].fin);
        printf("%s : Enter Total Marks (out of 100.0)\n", __func__);
        scanf("%f", &st[indexToUpdate].total);

        printf("Updated student number: %d\n", st[indexToUpdate].stnumber);
        printf("Updated student name: %s\n", st[indexToUpdate].stname);
    }
    else
    {
        printf("%s : Invalid record number\n", __func__);
    }

    printf("%s : End\n", __func__);
    return 0;
}
