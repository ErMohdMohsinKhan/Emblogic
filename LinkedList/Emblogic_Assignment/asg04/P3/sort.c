#include "headers.h"
#include "declarations.h"

void sort(Node *start) {
    printf("%s : Begin\n", __func__);

    if (start == NULL || start->next == NULL) {
        printf("%s : End (List is empty or has only one element)\n", __func__);
        return;
    }

    Node *current = start->next->next;
    Node *prev = start;
    Node *stop = NULL;
    int pe;
    int flag;
    Node *var;

    while (current != NULL) {
        Node *np = current;
        pe = np->data;
        flag = 0;
        var = NULL;
        stop = start->next;
        printf("%d : stop : %p\n", __LINE__, (void *)stop);
        printf("%d : current : %p\n", __LINE__, (void *)current);

        while (stop != current) {
            printf("\nInside inner loop\n");
            if (pe < stop->data) {
                flag = 1;
                var = stop;
                break;
            }
            prev = stop; // Move prev one step ahead
           stop = stop->next;
        }
	stop = start->next;
	}
        if (flag == 1) {
            prev->next = current->next; // Update links to remove current from its current position
            if (var != NULL) {
                current->next = var->next; // Update the link of the current node
                var->next = current; // Insert current after var
            } else {
                current->next = start->next; // Handle the case where current becomes the new head
                start->next = current; // Update the start to point to the new head
            }
            current = prev->next; // Move current to the next unsorted node
	} else {
            prev = current;
            current = current->next;
        }

    printf("%s : End\n", __func__);
}

