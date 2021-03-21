#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *next;
    int data;
};
int main()
{
    struct Node *head = NULL;
    struct Node *first = NULL;
    struct Node *second = NULL;
    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    head->next = first;
    first->next = second;
    second->next = NULL;
    head->data = 10;
    first->data = 20;
    second->data = 30;

    struct Node *current = head;

    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
    return 0;
}
