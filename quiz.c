#include<stdio.h>

int main()
{ 
int a,i;      
printf("Enter the number and you will get the multiplication table of it:\n");
scanf("%d",&a);
for(i=1; i<11; i++)
{
    printf("%d X %d= %d\n",a , i, a*i);
}

}