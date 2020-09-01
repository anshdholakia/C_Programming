#include<stdio.h>


void Reverse(char array[]){
    printf("The reversed way:\n");
    for (int i = 9; i > -1; i--)
    {
       printf("%d, ",array[i]);
    }
    


}
int main()
{
    char arr[]={1,2,3,4,5,6,7,8,9,10};
    
    printf("The normal way:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("\n");
    Reverse(arr);
    return 0;
}