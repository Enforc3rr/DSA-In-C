#include <stdio.h>
#include <stdlib.h>
int main()
{
    int array[] = {2, 3, 1, 5, 4};
    for (int i = 0; i < 5; i++)
    {
        printf("First Cycle  = %d\n", i);
        int smallestElement = 0;
        int temp = 0;
        for (int j = i; j < 5; j++)
        {
            if (array[smallestElement] > array[j])
            {
                smallestElement = j;
            }
        }
        printf("Array's Value is %d\n", array[i]);
        temp = array[i];
        printf("Temp is %d\n", temp);
        array[i] = array[smallestElement];
        printf("Smallest Element is %d\n", array[smallestElement]);
        array[smallestElement] = temp;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}