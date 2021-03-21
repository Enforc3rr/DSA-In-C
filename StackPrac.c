#include <stdio.h>
#include <stdlib.h>
int stack[10];
int top = 0;
void push(int data)
{
    stack[top++] = data;
}
void pop()
{
    top--;
}
void displayStack()
{
    for (int i = 0; i < top; i++)
    {
        printf("%d\n", stack[i]);
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    pop();
    displayStack();
    return 0;
}