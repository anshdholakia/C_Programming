#include<stdio.h>

int main()
{
    float a,b;
    int oper;
    printf("Enter first number\n");
    scanf("%f",&a);
    printf("Enter second number\n");
    scanf("%f",&b);
    printf("Enter operator- 1 for addition, 2 for subraction, 3 for multiplication, 4 for division\n");
    scanf("%d",&oper);
    if(oper==1){
        printf("Ans- %f",a+b);
    }
    else if(oper==2){
        printf("Ans- %f",a-b);
    }
    else if(oper==3){
        printf("Ans- %f",a*b);
    }
    else if(oper==4){
        printf("Ans- %f",a/b);

    }
    else{
        printf("Invalid Input");
    }
    
}