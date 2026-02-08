#include <stdio.h>
#include "array.h"
#include "linked_list.h"

int main() {
    struct node* head = NULL;
    DynamicArray arr;

    allocate(&head, 5);
    insert(&head, 200, 0); //{0, 0, 200, 0, 0}
    insert(&head, 400, 3); //{0, 0, 200, 400, 0}
    insert(&head, 300, 3); //{0, 0, 200, 300, 400}
    //insert(&head, 999999, 5);
    iterate(&head);
    printf("length=%d\n", length(&head));
    return 0;
}
