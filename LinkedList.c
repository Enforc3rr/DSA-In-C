#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void main()
{
    //Initializing Nodes
    struct Node *head = NULL;
    struct Node *first = NULL;
    struct Node *second = NULL;
    //Allocating Space
    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    //storing value in Nodes
    head->data = 10;
    first->data = 20;
    second->data = 30;
    //Linking Nodes
    head->next = first;
    first->next = second;
    second->next = NULL;
    //Calculating size of linkedlist
    int size = sizeOfLinkedList(head);
    printf("Size is  %d\n", size);
    //Printing Middle value at middle of linked list
    printf("Value at Middle Of Linked List is %d\n", valueAtMiddleOfLinkedList(head, size));
}
int sizeOfLinkedList(struct Node *node)
{
    int size = 0;
    while (node != NULL)
    {
        size++;
        node = node->next;
    }
    return size;
}

int valueAtMiddleOfLinkedList(struct Node *node, int size)
{
    size = size / 2;
    while (size != 0)
    {
        node = node->next;
        size--;
    }
    return node->data;
}