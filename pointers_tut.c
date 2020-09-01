#include<stdio.h>

int main()
{   
    int a=22;
    //int* ptrs; DO NOT DO THIS AS IT WILL STORE GARBAGE VALUE, ASSIGN NULL TO IT.
    int* ptrs=NULL;
    int* ptra=&a;
    printf("The address of pointer ptra to a is:%p\n", &ptra);    // can use %p or %x(hexa decimal) for printing a pointers address
    printf("The value of a is:%d\n",*ptra);
    printf("Address of a:%p\n",&a); //If you print address in %d, it will show same but in %p it will show different.
    return 0;
}
