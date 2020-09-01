#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, i = 0;
    int *i2;
    while (i < 4450)
    {
        printf("Greetings\n");
        i2 = malloc(333232 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(i2); // without this memory will leak
    }

    return 0;
}