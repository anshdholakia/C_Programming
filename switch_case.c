#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter your age:\n");
    scanf("%d",&a);
    switch (a){
    case 3:
        printf("Your age is three\n");
        break;
    
    default:
        printf("Invalid input\n");
        break;
    }
    
    return 0;
}
