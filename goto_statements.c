#include<stdio.h>


int main()

{
    label:
        printf("Ansh Dholakia\n");
        goto hurry;
    printf("sentence I dont want to print\n");    // goto can be used to skip sentences
    hurry:
        printf("Hurry now!\n");
        

    return 0;
}
