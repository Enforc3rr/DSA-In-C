//1 1 2 3 3 4 4 ... find 2

//can
#include <stdio.h>
int main()
{
    int numbers[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        for (int j = 0; j < 5; j++)
        {
            if (numbers[i] == numbers[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            printf("%s \n", "Entered Count Block");
            printf("%d \n", numbers[i]);
            break;
        }
    }
    return 0;
}
