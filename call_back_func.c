#include<stdio.h>
#include<stdlib.h>

int Sum(int a,int b){
    return a+b;

}

void greet1(int(*fPtr)(int,int)){
    printf("Hello user, this is Greet 1\n");
    printf("the sum of 5 and 7 is %d\n",fPtr(5,7));
}

void greet2(int(*fPtr)(int,int)){
    printf("Good morning user\n");
    printf("THe sum of 5 and 7 is %d\n",fPtr(5,7));
}
int main()
{
    
    int(*ptr)(int,int);
    ptr=Sum;
    greet1(ptr);
    return 0;
}