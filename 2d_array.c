// 2D array is also known as a matrix
#include<stdio.h>
int main()
{
    int marks[2][4]={{3,4,5,6},{7,8,9,10}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++){
            printf("The value of element %d element of this array is %d\n"),i,marks[i][j];
        } 
    }
    
    return 0;
}
