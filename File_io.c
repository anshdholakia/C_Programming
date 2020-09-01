#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* fptr=NULL;
    char string[64]="This is some content that is to be added";

    // reading a file
    // fptr=fopen("myfile.txt","r");
    // fscanf(fptr,"%s",string);
    // printf("This content of this file has %s\n",string);  // it prints only one word

    // writing a file
    // fptr=fopen("myfile.txt","w");
    // fprintf(fptr,"%s",string);   // it added string

    // appending a file
    fptr=fopen("myfile.txt","a");
    fprintf(fptr,"\n%s",string); 
    return 0;
}