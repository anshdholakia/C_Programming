#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    FILE*ptrf=NULL;

    char name[32],outlet[32],item[32];
    
    printf("Enter the person's name:\n");
    fgets(name,32,stdin);
    
    printf("Enter the item:\n");
    fgets(item,32,stdin);
    
    printf("Enter the outlet:\n");
    fgets(outlet,32,stdin);

    ptrf=fopen("reciept.txt","a");
    fprintf(ptrf,"\n%s, Thank you for puchasing %s from %s outlet. Hope to see you again\n",name, item, outlet); 

    fclose(ptrf);
    
    return 0;
}