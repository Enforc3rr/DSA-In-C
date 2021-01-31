#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    //Initializing Nodes
    struct Node *head = NULL;
    struct Node *first = NULL;
    struct Node *second = NULL;
    //Allocating Memory
    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    //Adding Data To Nodes
    head->data = 10;
    first->data = 20;
    second->data = 30;
    //Linking Nodes
    head->next = first;
    first->next = second;
    second->next = NULL;
    //display List
    display(head);
    return 0;
}

void display(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d\n", node->data);
        node = node->next;
    }
}