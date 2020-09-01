#include<stdio.h>
int main()
{
    // char a ='3';
    // char* ptra=&a;
    // printf("%d\n",ptra);
    // printf("%d",ptra+1);
    // return 0;

    int arr[]={1,2,3,23,21,44,223,313};
    printf("%d\n",arr[0]);
    printf("The address of first element of array is %d\n",&arr[0]);
    printf("The address of second element of the array is %d\n",&arr[1]);
    printf("The address of the element 2nd is : %d\n",arr+1);  //it increases the index number by 1

    printf("The address of first element of array is %d\n",*(&arr[0]));
    printf("The address of second element of the array is %d\n",*(&arr[1]));
    printf("The address of the element 2nd is : %d\n",*(arr+1));

    return 0;
}
