#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
int delRec(student **st, int *numStudents) {
    printf("%s : Begin\n", __func__);
    int stNumberToDelete;
    int indexToDelete = -1;

    if (*numStudents == 0) {
        printf("No records to delete.\n");
        printf("%s : End\n", __func__);
        return 0;
    }

    printf("%s : Enter student number to delete: \n", __func__);
    scanf("%d", &stNumberToDelete);

    for (int i = 0; i < *numStudents; i++) {
        if ((*st)[i].stnumber == stNumberToDelete) {
            indexToDelete = i;
            break;
        }
    }

    if (indexToDelete == -1) {
        printf("Student with the given number not found.\n");
    } else {
        // Shift elements to overwrite the element at indexToDelete
        for (int i = indexToDelete; i < *numStudents - 1; i++) {
            (*st)[i] = (*st)[i + 1];
        }
        (*numStudents)--;
        printf("Student with number %d deleted successfully.\n", stNumberToDelete);
    }

    printf("%s : End\n", __func__);
    return 0;
}

