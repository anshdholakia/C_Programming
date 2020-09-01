// Strings are arrays that end/terminate with null character(\0)

#include<stdio.h>

void printstr(char str[]){
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
    
}

int main()
{
    // char str[]={'a','n','s','h','\0'};
    // char str[]="ansh";
    char str[34];
    gets(str);
    printf("Using function ");
    printstr(str);
    printf("Using printf %s\n", str);
    printf("using puts ");
    puts(str);
    return 0;
}