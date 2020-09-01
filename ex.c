// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int row,coloumn; 
//     printf("Enter the number of rows of the matrix\n");
//     scanf("%d",&row);
//     printf("Enter the number of coloumns in the matrix\n");
//     scanf("%d",&coloumn);
//     int num[row][coloumn];
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < coloumn; j++)
//         {
//             printf("Enter the %d %d element of your matrix\n",i,j);
//             scanf("%d",&num[i][j]);
//         }
        
//     }

//     printf("\n");

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < coloumn; j++)
//         {
//             printf("%d ",num[i][j]);
//         }
//         printf("\n");
        
//     }

//     printf("\n");

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < coloumn; j++)
//         {
//             if (num[0][0]<num[i][j])
//             {
//                 num[0][0]=num[i][j];
//             }
            
//         }
        
//     }
    
//     printf("The largest number in the matrix is %d",num[0][0]);
    
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b;
//     printf("Enter the first number\n");
//     scanf("%d",&a);
//     printf("Enter the second number\n");
//     scanf("%d",&b);
//     int* ptr2;
//     *ptr2=a+b;
//     b=*ptr2-b;
//     a=*ptr2-a;
    
//     printf("THe value of a is %d\n",a);
//     printf("THe value of b is %d",b);
    
//     return 0;
// }



// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int k=1;
//     for(int i=0;i<5;i++){

//         for(int j=0;j<i;j++,k++){

//             if (k%2==0)
//             {
//                 printf("%d ",k);
//             }
//             else
//             {
//                 printf("* ");
//             }  

//         }
//         printf("\n");
//     }
//     return 0;
// }

