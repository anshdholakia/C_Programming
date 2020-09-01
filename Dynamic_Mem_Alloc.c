#include <stdio.h>
#include <stdlib.h>
int main()
{
    // //use of malloc
    // int *ptr;
    // int n;
    // printf("Enter the number you want the size of array to be\n");
    // scanf("%d",&n);
    // ptr = (int *)malloc(10 * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array\n",i);
    //     scanf("%d",&ptr[i]);
    // }
    // for (int i = 0; i < n; i++) // if i<4, it will print a garbage value at last
    // {
    //     printf("Enter the value at %d of this array is %d\n",i,ptr[i]);
    // }

    //use of calloc
    int *ptr;
    int n;
    printf("Enter the number you want the size of array to be\n");
    scanf("%d",&n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++) // if i<4, it will print a garbage value at last
    {
        printf("Enter the value at %d of this array is %d\n",i,ptr[i]);
    }

    //use of realloc
    
    printf("Enter the number you want the size of the new array to be\n");
    scanf("%d",&n);
    ptr = (int *)realloc(ptr,n* sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++) // if i<4, it will print a garbage value at last
    {
        printf("Enter the new value at %d of this array is %d\n",i,ptr[i]);
    }
    


    return 0;
}