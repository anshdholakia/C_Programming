#include<stdio.h>
#include"storage_classes2.c"


extern int sum;
int sumfunc(int a, int b){
    sum=a+b;
    return sum;

}
int main()
{
    //declaration= telling the compiler about the variable(no space reserved)
    //definition= declaration + space reservation
    sumfunc(3,5);
    printf("%d",sum);


    return 0;
}