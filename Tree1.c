#include <stdio.h>
#include <stdlib.h>
struct Node *Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *createNode(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));

    node->data = data;

    node->left = null;
    node->right = null;

    return node;
}

int main()
{
}