#include<stdio.h>
#include<stdlib.h>

int main()
    {
        auto int a=10;

        {auto int a;
        printf("a:%d\n",a);
        }

        printf("a:%d\n",a);
        
    }
