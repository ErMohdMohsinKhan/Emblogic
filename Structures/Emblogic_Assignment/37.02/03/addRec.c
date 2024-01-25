#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

int addRec(student **st, int *numStudents) {
    printf("%s : Begin\n", __func__);
    // Increase the size of the student array by one
    *st = (student *)realloc(*st, (*numStudents + 1) * sizeof(student));
    if (!(*st)) {
        perror("realloc");
        exit(EXIT_FAILURE);
    }

    student *newStudent = *st + *numStudents; // Point to the new student record
    printf("%s : Enter student number\n", __func__);
    scanf("%d", &newStudent->stnumber);
    getchar();
    printf("%s : Enter student name\n", __func__);
    fgets(newStudent->stname, 20, stdin);
    int len = strlen(newStudent->stname);
    newStudent->stname[len - 1] = '\0';
    printf("%s : Enter sex (M/F)\n", __func__);
    scanf(" %c", &newStudent->sex);
    printf("%s : Enter Quiz1 Marks (out of 5.0)\n", __func__);
    scanf("%f", &newStudent->quiz1);
    printf("%s : Enter Quiz2 Marks (out of 5.0)\n", __func__);
    scanf("%f", &newStudent->quiz2);
    printf("%s : Enter Assignment Marks (out of 10.0)\n", __func__);
    scanf("%f", &newStudent->assignment);
    printf("%s : Enter Midterm Marks (out of 20.0)\n", __func__);
    scanf("%f", &newStudent->midterm);
    printf("%s : Enter Final Marks (out of 60.0)\n", __func__);
    scanf("%f", &newStudent->fin);
    printf("%s : Enter Total Marks (out of 100.0)\n", __func__);
    scanf("%f", &newStudent->total);

    (*numStudents)++;
    printf("%s : End\n", __func__);
    return 0;
}
