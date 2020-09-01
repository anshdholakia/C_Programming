#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE * ptr=NULL;
    // ptr=fopen("myfile.txt","r");
    //getc
    // char c=fgetc(ptr);
    // printf("The charater I read was '%c'",c);

    //putc
    ptr=fopen("myfile.txt","w");
    fputc('o',ptr);
    return 0;
}

 