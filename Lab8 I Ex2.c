#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void push (struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc (sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int GetNth (struct Node* head, int index)
{
    int k;
    k=1;

    struct Node* current = head;

    while (current != NULL)
    {
        if (k == index)
            return current->data;
        current = current->next;
        k++;
    }
    return 0;
}

int main ()
{
    int index;
    printf ("The index is :");
    scanf ("%d", &index);

    struct Node* head = NULL;

    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);

    printf ("The data of the index is :%d", GetNth(head, index));
    return 0;
}
