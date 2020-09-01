#include<stdio.h>


int b=55;

int func1(int b1){
    static int var=0; //it will remember its previous value that was 1 and will stay. then 2. then 3....
    printf("The value of var is %d\n",var);
    var++;
    return b1+var;

}
int main()
{
    int b=344;
    int var=func1(b);
    var=func1(b);
    // int *ptr;
    // printf("%d",var);
    return 0;
}