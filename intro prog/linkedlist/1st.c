/*inserte consigna señor stark*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int count;
    struct node *next;
} nodeT;

void print_list(nodeT *head) {
    nodeT *current = head;

    while (current != NULL) {
        printf("%d (con direccion %p)->", current->count, *&current);
        current = current->next;
    }
}

int main(int argc, char const *argv[]) {
    nodeT *head = (nodeT *)malloc(sizeof(nodeT));
    if (head == NULL) {
        perror("Memory allocation failed");
        return 1;
    }
    head->count = 1;
    head->next = NULL;

    head->next = (nodeT *)malloc(sizeof(nodeT));
    head->next->count = 2;
    head->next->next = NULL;

    head->next->next = (nodeT *)malloc(sizeof(nodeT));
    head->next->next->count = 3;
    head->next->next->next = NULL;

    head->next->next->next = (nodeT *)malloc(sizeof(nodeT));
    head->next->next->next->count = 4;
    head->next->next->next->next = NULL;



    print_list(head);

    // Don't forget to free the allocated memory
    free(head->next->next);
    free(head->next);
    free(head);

    return 0;
}