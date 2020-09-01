#include<stdio.h>

int func1(int array[]){
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n",array[i]);
    }
    // array[0]=324 It will change its value
    return 0;

}

int func2(int *ptr){
    for (int i = 0; i < 4; i++)
    {
        printf("The value of arr[%d] is %d\n",i,*(ptr+i));
    }
    *(ptr+2)=3243;
    
}

int main()
{
    int arr[]={21,2,3,32};
    // printf("The value of arr[0] is %d\n",arr[0]);
    // func1(arr);
    // printf("The value of arr[0] is %d\n",arr[0]);
    func2(arr);
    printf("Value of arr[3] is %d\n",arr[2]);
    return 0;
}