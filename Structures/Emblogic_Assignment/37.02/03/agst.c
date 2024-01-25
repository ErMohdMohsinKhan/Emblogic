#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int agst(student **st, int *numStudents) {
    printf("%s : Begin\n", __func__);
    int res;
    printf("%s : Enter the Record number between 1 to %d\n", __func__, *numStudents);
    scanf("%d", &res);
    res = res - 1;
    if ((res >= 0) && (res < *numStudents)) {
        float qz1 = (*st)[res].quiz1;
        float qz2 = (*st)[res].quiz2;
        float asg = (*st)[res].assignment;
        float midterm = (*st)[res].midterm;
        float fin = (*st)[res].fin;
        float tot = (*st)[res].total;
        float sum = qz1 + qz2 + asg + midterm + fin + tot;
        float avg = sum / 6.0;
        printf("%s : Sum : %.2f\tAverage : %.2f\n", __func__, sum, avg);
    } else {
        printf("%s : Invalid record number\n", __func__);
    }
    printf("%s : End\n", __func__);
    return 0;
}

