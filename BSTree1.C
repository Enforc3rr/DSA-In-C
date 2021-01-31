#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createTree(int data)
{
    //Allocating Space
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    //Assigning Data
    newNode->data = data;
    //Making Left And Right Part NULL
    newNode->left = NULL;
    newNode->right = NULL;
    //returing
    return (newNode);
}
struct Node *insertNode(struct Node *node, int data)
{
    if (node == NULL)
    {
        return createTree(data);
    }
    if (data < node->data)
    {
        node->left = insertNode(node->left, data);
    }
    else
    {
        node->right = insertNode(node->right, data);
    }
    return (node);
}
void Inorder(struct Node *node)
{
    if (node != NULL)
    {
        Inorder(node->left);
        printf("%d ", node->data);
        Inorder(node->right);
    }
}
int main()
{
    struct Node *root = NULL;
    root = insertNode(root, 50);
    insertNode(root, 40);
    insertNode(root, 20);
    insertNode(root, 60);

    //Use Inorder Traversal For Printing
    Inorder(root);

    return 0;
}
