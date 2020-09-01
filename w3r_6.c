// Write a program in C to read n number of values in an array and display it in reverse order
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a;
//     printf("Enter the number of elements:\n");
//     scanf("%d",&a);
//     printf("\n");
//     int arr[a];
//     for (int i = 0; i < a; i++)
//     {
//         printf("Enter the %d element:\n",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("\n");
//     for (int i = a-1; i >= 0; i--)
//     {
//         printf("%d ",arr[i]);
//     }

//     return 0;
// }

// Write a program in C to count a total number of duplicate elements in an array.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {   int a,count=0;
//     printf("Enter the number of elements:\n");
//     scanf("%d",&a);
//     int arr[a];
//     for (int i = 0; i < a; i++)
//     {
//        printf("Enter the %d element:",i+1);
//        scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = i+1; j < a; j++)
//         {
//             if (arr[i]==arr[j])
//             {
//                 count++;
//             }

//         }

//     }
//     printf("Number of duplicates:%d",count);

//     return 0;
// }

// Write a program in C for addition of two Matrices of same size.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows1,col1,rows2,col2;
//     printf("Enter the number of rows for first array:\n");
//     scanf("%d",&rows1);
//     printf("Enter the number of coloumns for first array:\n");
//     scanf("%d",&col1);
//     printf("Enter the number of rows for second array:\n");
//     scanf("%d",&rows2);
//     printf("Enter the number of rows for second array:\n");
//     scanf("%d",&col2);
//     if (rows1==rows2 && col1==col2)
//     {
//         int arr[rows1][col1],arr2[rows2][col2];
//         for (int i = 0; i < rows1; i++)
//         {
//             for (int j = 0; j < col1; j++)
//             {
//                 printf("First array- [%d][%d] element: ",i,j);
//                 scanf("%d",&arr[i][j]);
//             }

//         }
//         for (int i = 0; i < rows2; i++)
//         {
//             for (int j = 0; j < col2; j++)
//             {
//                 printf("Second array- [%d][%d] element: ",i,j);
//                 scanf("%d",&arr2[i][j]);
//             }

//         }
//         printf("The addition of these matrixs:\n");
//         printf("\n");
//         for (int i = 0; i < rows1; i++)
//         {
//             printf("\t");
//             for (int k = 0; k < col1; k++)
//             {
//                 printf("%d ",arr[i][k]+arr2[i][k]);
//             }
//             printf("\n");
//         }

//     }
//     else
//     {
//         printf("These matrices cannot be added\n");
//     }

//     return 0;
// }

// Write a program in C for multiplication of two square Matrices
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int r1,c1,r2,c2,sum=0;
//     printf("Enter the number of rows and coloumns for first matrix sepearted by a space:\n");
//     scanf("%d %d",&r1,&c1);
//     printf("Enter the number of rows and coloumns for second matrix sepearted by a space:\n");
//     scanf("%d %d",&r2,&c2);
//     if (c2==r2)
//     {
//         int a1[r1][c1],a2[r2][c2],res[r1][c2];
//         for (int i = 0; i < r1; i++)
//         {
//             for (int j = 0; j < c1; j++)
//             {
//                 printf("For first matrix:- [%d][%d]: ",i,j);
//                 scanf("%d",&a1[i][j]);
//             }

//         }
//         for (int i = 0; i < r2; i++)
//         {
//             for (int j = 0; j < c2; j++)
//             {
//                 printf("For second matrix:- [%d][%d]: ",i,j);
//                 scanf("%d",&a2[i][j]);
//             }

//         }
//         for(int i=0;i<r1;i++)
//           for(int j=0;j<c2;j++)
//            res[i][j]=0;
//              for(int i=0;i<r1;i++)    //row of first matrix
//                  {
//                    for(int j=0;j<c2;j++)    //column of second matrix
//                      {
//                        sum=0;
//                          for(int k=0;k<c1;k++)
//                            sum=sum+a1[i][k]*a2[k][j];
//                            res[i][j]=sum;
//                      }
//                  }
//         printf("The resultant matrix is:\n");
//         for (int i = 0; i < r1; i++)
//         {
//             for (int j = 0; j < c2; j++)
//             {
//                 printf("%d ",res[i][j]);
//             }
//             printf("\n");

//         }

//     }
//     else
//     {
//         printf("Cannot be multiplied\n");
//     }

//     return 0;
// }

// Write a program in C to print or display upper triangular matrix.
// #include <stdio.h>
// int main()
//  {
//   int arr1[10][10],i,j,n;
//   float determinant=0;

//  printf("\n\nDisplay the upper triangular of a given matrix :\n");
//        printf("----------------------------------------------\n");

//      printf("Input the size of the square matrix : ");
//      scanf("%d", &n);
// 	 printf("Input elements in the first matrix :\n");
//        for(i=0;i<n;i++)
//         {
//             for(j=0;j<n;j++)
//             {
// 	           printf("element - [%d],[%d] : ",i,j);
// 	           scanf("%d",&arr1[i][j]);
//             }
//         }
// 	 printf("The matrix is :\n");
// 	 for(i=0;i<n;i++)
// 	 {
// 	   for(j=0;j<n ;j++)
// 	     printf("% 4d",arr1[i][j]);
// 	    printf("\n");
// 	 }

//    printf("\nSetting zero in upper triangular matrix\n");
//    for(i=0;i<n;i++)
//      {
//       printf("\n");
//       for(j=0;j<n;j++)
//            if(i>=j)
//              printf("% 4d",arr1[i][j]);
//            else
//              printf("% 4d",0);
//   }
//        printf("\n\n");
// }

//  Write a program in C to calculate determinant of a 3 x 3 matrix
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a;
//     printf("------------------------------------------------------\n");
//     printf("Enter the number of rows and coloumns the matrix has:\n");
//     scanf("%d",&a);
//     int arr[a][a],sum;
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < a; j++)
//         {
//             printf("Enter [%d][%d] elements: ",i,j);
//             scanf("%d",&arr[i][j]);
//         }

//     }

//     sum=(arr[0][0]*((arr[1][1]*arr[2][2])-(arr[1][2]*arr[2][1])))-(arr[0][1]*((arr[1][0]*arr[2][2])-(arr[1][2]*arr[2][0])))+(arr[0][2]*((arr[1][0]*arr[2][1])-(arr[1][1]*arr[2][0])));
//     printf("The determinant of this matrix is: %d",sum);
//     return 0;
// }

//  Write a program in C to check whether a given matrix is an identity matrix.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b;
//     printf("Enter the number of rows\n");
//     scanf("%d",&a);
//     printf("Enter the number of coloumns\n");
//     scanf("%d",&b);
//     int arr[a][b],count=0;
//     for (int i = 0; i <a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             printf("[%d][%d]: ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for (int i = 0; i <a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             if (i==j)
//             {
//                 if (arr[i][j]!=1)
//                 {
//                     count++;
//                 }

//             }
//             else
//             {
//                 if(arr[i][j]!=0){
//                     count++;
//                 }
//                 else
//                 {
//                     continue;
//                 }

//             }

//         }
//     }
//     if (count>0)
//     {
//         printf("This is not a identity matrix\n");
//     }
//     else
//     {
//         printf("It is an Identity matrix\n");
//     }
//     return 0;
// }

// Write a program in C to find the majority element of an array.
// A majority element in an array A[] of size n is an element that appears more than n/2 times
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int count=0,a,b;
//     printf("--------------------------------------------------------------------------------------------------------\n");
//     printf("Enter the number of elements in the array: ");
//     scanf("%d",&a);
//     int arr[a];
//     printf("\n");
//     for (int i = 0; i < a; i++)
//     {
//         printf("Enter %d element: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i <a; i++)
//     {
//         count=0;
//         b=arr[i];
//         for (int j = i; j < a; j++)
//         {
//             if (b==arr[j])
//             {
//                 count++;
//             }

//         }
//         if (count>a/2)
//         {
//             printf("%d is a majority number!\n",b);
//             exit;
//         }
//         else
//         {

//             continue;
//         }

//     }
//     printf("None of them are majority numbers\n");

//     return 0;
// }

// Write a program in C to find the missing number from a given array. There are no duplicates in list
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int count=0,a;
//     printf("Enter your number of array elements:\n");
//     scanf("%d",&a);
//     int arr[a];
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     for (int i = 1; i < 10; i++)
//     {
//         count=0;
//         for (int j = 0; j < a; j++)
//         {
//             if (arr[j]==i)
//             {
//                 count=1;
//                 break;
//             }
//             else if (arr[j]!=i)
//             {
//                 count=0;
//             }

//         }
//         if (count==0)
//         {
//             printf("%d is missing\n",i);
//             exit;
//         }

//     }
//     if (count==1)
//     {
//         printf("Perfect!");

//     }

//     return 0;
// }

// Write a program in C to find two elements whose sum is closest to zero
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,count=0;
//     printf("Enter the number of elements\n");
//     scanf("%d",&a);
//     int arr[a],res[a*(a-1)];
//     for (int i = 0; i < a; i++)
//     {
//         printf("Enter the %d element:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < a; j++)
//         {

//             if (i==j)
//             {
//                 continue;
//             }

//             res[count]=arr[i]+arr[j];
//             count++;

//         }

//     }

//     for (int i = 0; i < count; i++)
//     {
//         if (res[0]>res[i])
//         {
//             res[0]=res[i];
//         }

//     }
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < a; j++)
//         {

//             if (i==j)
//             {
//                 continue;
//             }

//             if (arr[0]+arr[1]>=arr[i]+arr[j])
//             {
//                 arr[0]=arr[i];
//                 arr[1]=arr[j];
//             }

//         }

//     }
//     printf("closest to 0: %d+%d:%d",arr[0],arr[1],res[0]);

//     return 0;
// }

// Write a program in C to find the pivot element of a sorted and rotated array using binary search
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int a, b, pos, neg;
//     printf("Enter the number of elements:\n");
//     scanf("%d", &a);
//     int arr[a];
//     for (int i = 0; i < a; i++)
//     {
//         printf("Enter %d element:", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     if (arr[0] - arr[1] < 0)
//     {
//         for (int i = 0; i < a; i++)
//         {

//             if (i == a)
//             {
//                 break;
//             }
//             else
//             {

//                 if (arr[i] - arr[i + 1] > 0)
//                 {
//                     printf("%d is the pivotal point", arr[i]);
//                     break;
//                 }
//             }
//         }
//     }
//     else
//     {
//         for (int i = 0; i < a; i++)
//         {

//             if (i == a)
//             {
//                 break;
//             }
//             else
//             {

//                 if (arr[i] - arr[i + 1] < 0)
//                 {
//                     printf("%d is the pivotal point", arr[i]);
//                     break;
//                 }
//             }
//         }
//     }
//     return 0;
// }

// Write a program in C to find majority element of an array
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,coun,counz=0,inex;;
//     printf("Enter the number of elements\n");
//     scanf("%d",&a);
//     int arr[a];
//     for (int i = 0; i < a; i++)
//     {
//         printf("Enter the %d element:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i < a; i++)
//     {
//         coun=0;
//         for (int j = 0; j < a; j++)
//         {
//             if (i==j)
//             {
//                 continue;
//             }

//            else if (arr[i]==arr[j])
//            {
//                coun+=1;
//            }

//         }
//         if (coun>counz)
//         {
//             counz=coun;
//             inex=i;
//         }

//     }
//     printf("The most common number is: %d",arr[inex]);

// }

// printing numbers in spiral
// #include <stdio.h>
// #define R 4
// #define C 5
// void spiralOfMatrix(int enrow, int encol, int arr1[R][C])
// {
//     int i, rowind = 0, colind = 0;
//     while (rowind < enrow && colind < encol)
//     {
//         for (i = colind; i < encol; ++i)
//         {
//             printf("%d ", arr1[rowind][i]);
//         }
//         rowind++;
//         for (i = rowind; i < enrow; ++i)
//         {
//             printf("%d ", arr1[i][encol-1]);
//         }
//         encol--;
//         if ( rowind < enrow)
//         {
//             for (i = encol-1; i >= colind; --i)
//             {
//                 printf("%d ", arr1[enrow-1][i]);
//             }
//             enrow--;
//         }
//         if (colind < encol)
//         {
//             for (i = enrow-1; i >= rowind; --i)
//             {
//                 printf("%d ", arr1[i][colind]);
//             }
//             colind++;
//         }
//     }
// }
// int main()
// {
// int i,j;
//     int arr1[R][C] = { {1,  2,  3,  4,  5},
//         {6, 7,  8,  9,  10},
//         {11, 12, 13, 14, 15},
//         {16, 17, 18, 19, 20}
//     };
//  //------------- print original array ------------------
// 	printf("The given array in matrix form is :  \n");
// 	for(i = 0; i < R; i++)
// 	{
// 	for (j=0;j<C;j++)
// 	{
// 	printf("%d  ", arr1[i][j]);
//     }
// 	printf("\n");
// 	}
// //------------------------------------------------------
// printf("The spiral form of above matrix is: \n");
//     spiralOfMatrix(R, C, arr1);
//     return 0;
// }

// Write a program in C to count the number of triangles can be fromed from a given array
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,count=0;
//     printf("Enter the number of elements: \n");
//     scanf("%d",&a);
//     int arr[a];
//     for (int i = 0; i < a; i++)
//     {
//         printf("Enter the %d element:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i < a-2; i++)
//     {
//         for (int k = i+1; k < a; k++)
//         {
//             int j = k+1;
//             while (k < a && (arr[i] + arr[k])> arr[j])
//             {
//                 j++;
//             }

//             count+=j-k-1;

//         }

//     }

//     printf("Number of triangles: %d",count);

//     return 0;
// }

// Write a program in C to move all zeroes to the end of a given array
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int a,count=0,shift=0;
//     printf("Enter the number of elements:");
//     scanf("%d",&a);
//     int arr[a];
//     for (int i = 1; i <= a; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 1; i <= a; i++)
//     {
//         if(arr[i]==0){
//             count++;
//         }

//     }
    
//     for (int i = 1; i <= a; i++)
//     {
//         if (arr[i]==0)
//         {
//             if (i>(a-count))
//             {
//                 continue;
//             }
//             else
//             {
//                 while (arr[a-shift]==0)
//                 {
//                    shift++; 
//                 }
//                 int temp=arr[a-shift];
//                 arr[i]=temp;
//                 arr[a-shift]=0;
//             }          
//         }
//         shift=0;      
//     }
//     for (int i = 1; i <=a; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


// 