#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int rows,coloums;   
    printf("Enter the number rows you want in your first matrix\n");
    scanf("%d",&rows);
    printf("Enter the number coloums you want in your first matrix\n");
    scanf("%d",&coloums);
    int a[rows-1][coloums-1];


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloums; j++)
        {
            printf("Enter an element %d,%d number\n",i,j);
            scanf("%d",&a[i][j]);
            
        }
        
    }

    printf("\nYour 1st matrix:\n");
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloums; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }

    int rows1,coloums1;   
    printf("\n");
    printf("Enter the number rows you want in your second matrix\n");
    scanf("%d",&rows1);
    printf("Enter the number coloums you want in your second matrix\n");
    scanf("%d",&coloums1);
    if (rows1!=coloums)
    {
        printf("Wrong input for rows and coloumn\n");
        return 0;
    }
    
    int b[rows1-1][coloums1-1];


    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < coloums1; j++)
        {
            printf("Enter an element %d,%d number\n",i,j);
            scanf("%d",&b[i][j]);
            
        }
        
    }

    
    printf("\nYour 2nd matrix\n");
    
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < coloums1; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    getch();
}