#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=34;
    int* ptr; //this is a wild pointer
    *ptr=34;
    *ptr=&a; //thi sis not a wild pointer
    return 0;
}