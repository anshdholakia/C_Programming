#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n",argc);  // if you give ./comm_line_arg.exe arg1 arg2, it will print 3
    for (int i = 0; i < argc; i++)
    {
        printf("This argument at index number %d has a value of %s\n",i,argv[i]);
    }
    
    return 0;
}
