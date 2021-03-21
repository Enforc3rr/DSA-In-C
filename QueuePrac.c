#include <stdio.h>
#include <stdlib.h>
int queue[10];
int top = 0;
int rear = 0;

void insertItem(int data)
{
    queue[top] = data;
    top++;
}
void removeItem()
{
    rear++;
}
void printItems()
{
    for (int i = rear; i < top; i++)
    {
        printf("%d\n", queue[i]);
    }
}

int main()
{
    insertItem(10);
    insertItem(20);
    insertItem(30);
    removeItem();
    printItems();
    return 0;
}