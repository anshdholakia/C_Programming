#include<stdio.h>
#include<stdlib.h>
int Sum(int a, int b){
    return a+b;
}
void greet(){
    printf("Hello, how are you today");
}
int main()
{
    // printf("The sum of 1 and 2 is %d",Sum(1,2));
    int (*fPtr)(int,int);  // points to a function that gives integer and takes two integer
    fPtr=&Sum;// creating a function pointer
    printf("THe sum of 1 and 2 is %d",(*fPtr)(1,2));
    
    return 0;
}