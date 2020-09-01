#include<stdio.h>


int main()
{
    int a=34;
    int *ptr=NULL;
    if (ptr!=NULL)
    {
        printf("The address of a is %d\n",*ptr);
    }
    
    else
    {
        printf("The address cannot be dereferenced\n");
    }
    
    return 0;
}