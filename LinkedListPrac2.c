#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *next;
    struct Node *prev;
    int data;
};
struct Node *createLinkedList(int data)
{
    struct Node *newNode = NULL;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
}

int main()
{
    struct Node *head = createLinkedList(10);
    head->next = createLinkedList(20);
    head->next->next = createLinkedList(30);
    head->next->prev = head->next;

    struct Node *current = head;

    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
    return 0;
}