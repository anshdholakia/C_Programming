#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int a,b;
    char *op;
    op=argv[1];
    a=atoi(argv[2]);
    b=atoi(argv[3]); //atoi takes a string and returns an integer

    printf("Operation is %s\n",op);
    printf("Num1 is %d\n",a);
    printf("Num2 is %d\n",b);

    if (strcmp(op,"add")==0)
    {
        printf("%d\n",a+b);
    }
    else if (strcmp(op,"sub")==0)
    {
        printf("%d\n",a-b);
    }
    else if (strcmp(op,"mul")==0)
    {
        printf("%d\n",a*b);
    }
    else if (strcmp(op,"div")==0)
    {
        printf("%d\n",a/b);
    }
    
    
    return 0;
}
