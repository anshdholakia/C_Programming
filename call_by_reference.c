// in call by reference, you can change the value of variable in main function using pointer

//#include<stdio.h>

// int swap(int*x,int*y){
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
//     return *x,*y;

// }
// int main()

// {
//     int a=2,b=34;
//     printf("The numbers entered are %d and %d\n",a,b);
//     swap(&a,&b);
//     printf("The swapped numbers now are %d and %d\n",a,b);


    
//     return 0;
// }

#include<stdio.h>

int a,b,temp;

int add(int*x,int*y){
    *y=b; 
    temp=*x+*y;
    *x=temp;
    return *x;
}

int sub(int*x,int*y){
    *x=temp-*y;
    temp=*x-*y;
    *y=temp;
    return *y;
}




int main()
{
    
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter second number\n");
    scanf("%d",&b);
    printf("The number you gave are %d and %d\n", a,b);
    add(&a,&b);
    printf("The value of a is %d\n",a);
    sub(&a,&b);
    printf("The value of b is %d\n",b);


    return 0;
}