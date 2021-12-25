#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
} node_t;

void push_node(node_t *head, int val)
{
    node_t *current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = (node_t *)malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}

void print_list(node_t *head) {
    node_t *current = head;

    while (current->next != NULL) {
        printf("%d->", current->val);

        current = current->next;
    }

    printf("\n");
}

int main()
{
    node_t *head = NULL;
    head = (node_t *)malloc(sizeof(node_t));

    head->val = 0;
    head->next = NULL;

    for (int i = 1; i <= 5; i++) {
        push_node(head, i);
    }

    print_list(head);

    free(head);

    return 0;
}
