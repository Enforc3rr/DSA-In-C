#include <stdio.h>

int main()
{
    //Initializing Array
    int rollNo[10];

    //Taking Input
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &rollNo[i]);
    }
    //Printing
    for (int i = 0; i < 10; i++)
    {
        printf("%d", rollNo[i]);
    }
    return 0;
}