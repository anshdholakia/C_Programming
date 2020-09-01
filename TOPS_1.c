// 1.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     char name[30],add[30],DOB[30],age;
//     printf("Enter your Address: ");
//     gets(add);
//     printf("\n");
//     printf("Enter your name: ");
//     scanf("%s",name);
//     printf("\n");
//     printf("Enter DOB: d/m/y format: ");
//     scanf("%s",DOB);
//     printf("\n");
//     printf("Enter your Age: ");
//     scanf("%d",&age);
//     printf("\n");
//     printf("Name: %s\n",name);
//     printf("Age: %d\n",age);
//     printf("DOB: %s\n",DOB);
//     printf("Address: %s\n",add);

//     return 0;
// }

// 2.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b;
//     printf("Enter first number: \n");
//     scanf("%d",&a);
//     printf("Enter second number: \n");
//     scanf("%d",&b);
//     printf("Addition of two numbers: %d\n",a+b);
//     printf("Subtraction of two numbers: %d\n",a-b);
//     printf("Multiplication of two numbers: %d\n",a*b);
//     printf("Eivision of two numbers: %f\n",(float)a/(float)b);

//     return 0;
// }

// 3.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a;
//     printf("Enter a number: \n");
//     scanf("%d",&a);
//     printf("The square of the number: %d\nThe cube of the number: %d",a*a,a*a*a);
//     return 0;
// }

// 4.
// #include<stdio.h>
// #include<stdlib.h>
// #define PI 3.14
// int main()
// {
//     float a;
//     printf("Enter the radius\n");
//     scanf("%f",&a);
//     printf("The area of the circle is: %f",PI*2*a);
//     return 0;
// }

// 5.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int x1,y1,x2,y2,x3,y3;
//     float area;
//     printf("Enter the x1 coordinate: \n");
//     scanf("%d",&x1);
//     printf("Enter the y1 coordinate: \n");
//     scanf("%d",&y1);
//     printf("Enter the x2 coordinate: \n");
//     scanf("%d",&x2);
//     printf("Enter the y2 coordinate: \n");
//     scanf("%d",&y2);
//     printf("Enter the x3 coordinate: \n");
//     scanf("%d",&x3);
//     printf("Enter the y3 coordinate: \n");
//     scanf("%d",&y3);
//     area=(x1*(y2-y3)-x2*(y3-y1)+x3*(y1-y2))/2;
//     printf("The area of the triangle is: %f",(float)abs(area));

//     return 0;
// }

// 6.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,t,I,r;
//     printf("Enter the amount: ");
//     scanf("%d",&a);
//     printf("\n");
//     printf("Enter the time of keeping it: ");
//     scanf("%d",&t);
//     printf("\n");
//     printf("Enter the rate of interest: ");
//     scanf("%d",&r);
//     printf("\n");
//     I=(a*t*r)/100;
//     printf("Simple Interest= %d\n",I);
//     return 0;
// }

// 7.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int C;
//     printf("Enter the number in Celsius Centigrade: ");
//     scanf("%d",&C);
//     printf("Tempearture in Fahrenheit: %dF",(C*9/5)+32);
//     return 0;
// }

// 8.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int m[5],avg=0;
//     printf("Enter your marks: ");
//     scanf("%d",&m[0]);
//     printf("Enter your marks: ");
//     scanf("%d",&m[1]);
//     printf("Enter your marks: ");
//     scanf("%d",&m[2]);
//     printf("Enter your marks: ");
//     scanf("%d",&m[3]);
//     printf("Enter your marks: ");
//     scanf("%d",&m[4]);
//     for (int i = 0; i < 5; i++)
//     {
//         avg+=m[i];
//     }
//     printf("The average of the 5 numbers is: %d",avg/5);

//     return 0;
// }

// 9.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b;
//     printf("Enter number 1: ");
//     scanf("%d",&a);
//     printf("Enter number 2: ");
//     scanf("%d",&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("Value of a: %d\n",a);
//     printf("Value of b: %d\n",b);

//     return 0;
// }

// 10.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     if (a==0)
//     {
//         printf("Neither positive nor negative");
//     }
//     else if (a>0)
//     {
//         printf("Positive number");
//     }
//     else
//     {
//         printf("Negative number");
//     }

//     return 0;
// }

// 11.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int year;
//     printf("Enter the year to check if it is leap year or not: \n");
//     scanf("%d",&year);
//     if (year%4==0)
//     {
//         printf("It is a leap year!");
//     }
//     else
//     {
//         printf("It is not a leap year");
//     }

//     return 0;
// }

// 12.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a;
//     printf("Enter a number to check if it is prime or not:");
//     scanf("%d",&a);
//     if (a==1 || a==0)
//     {
//         printf("False, not prime!\n");
//         return 0;
//     }

//     for (int i = 2; i < a; i++)
//     {
//         if (a%i==0)
//         {
//             printf("False, not prime!\n");
//             return 0;
//         }

//     }
//     printf("True, it is prime!\n");

//     return 0;

// }

// 13.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter 1 number:");
//     scanf("%d",&a);
//     printf("Enter 2 number:");
//     scanf("%d",&b);
//     printf("Enter 3 number:");
//     scanf("%d",&c);
//     if (a>b && a>c)
//     {
//         printf("%d\n",a);
//     }
//     else if (b>a && b>c)
//     {
//         printf("%d\n",b);
//     }
//     else
//     {
//         printf("%d\n",c);
//     }
//     return 0;
// }

// 14.
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int a, b, c, big;
//     printf("Enter 1 number:");
//     scanf("%d", &a);
//     printf("Enter 2 number:");
//     scanf("%d", &b);
//     printf("Enter 3 number:");
//     scanf("%d", &c);
//     big = a > b ? (a > c ? a : c) : (b > c ? b : c); // (condition)?(action when condition is met):(when condition is not met)
//     printf("%d",big);
//     return 0;
// }

// 15.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter number 1: \n");
//     scanf("%d",&a);
//     printf("Enter number 2: \n");
//     scanf("%d",&b);
//     printf("Enter number 3: \n");
//     scanf("%d",&c);
//     if (a>b && a>c)
//     {
//         printf("%d",a);
//     }
//     else if (b>c && b>a)
//     {
//         printf("%d",b);
//     }
//     else
//     {
//         printf("%d",c);
//     }

//     return 0;
// }

// 16.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b,c,d,e;
//     printf("Enter the number of marks in Mathematics: \n");
//     scanf("%d",&a);
//     printf("Enter the number of marks in S.S: \n");
//     scanf("%d",&b);
//     printf("Enter the number of marks in Science: \n");
//     scanf("%d",&c);
//     printf("Enter the number of marks in English: \n");
//     scanf("%d",&d);
//     printf("Enter the number of marks in Business: \n");
//     scanf("%d",&e);
//     printf("\nTotal marks: %d\n",a+b+c+d+e);
//     float per=(float)(a+b+c+d+e)/5;
//     if (per>75)
//     {
//         printf("\nDistinction");
//     }
//     else if (per>60 && per<=75)
//     {
//         printf("\nFirst class");
//     }
//     else if (per>50 && per<=60)
//     {
//         printf("\nSecond class");
//     }
//     else if (per>35 && per<=50)
//     {
//         printf("\nPass class");
//     }
//     else
//     {
//         printf("\nFail");
//     }
//     return 0;
// }

// 17.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a;
//     printf("Enter a day (1 to 7): ");
//     scanf("%d",&a);
//     while (a<1 || a>7)
//     {
//         printf("Please enter number between 1 to 7: ");
//         scanf("%d",&a);
//     }

//     switch (a)
//     {
//     case 1:
//         printf("Monday\n");
//         break;
//     case 2:
//         printf("Tuesday\n");
//         break;
//     case 3:
//         printf("Wednesday\n");
//         break;
//     case 4:
//         printf("Thursday\n");
//         break;
//     case 5:
//         printf("Friday\n");
//         break;
//     case 6:
//         printf("Saturday\n");
//         break;
//     case 7:
//         printf("Sunday\n");
//         break;
//     default:
//         break;
//     }
//     return 0;
// }

// 18.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b,c;
//     printf("-------------- Calculator --------------\n");
//     printf("\nEnter 1 for addition\n2 for Subtraction\n3 for Multiplication\n4 for Division:");
//     scanf("%d",&a);
//     while (a>4 || a<1)
//     {
//         printf("\nPlease enter valid numbers: ");
//         scanf("%d",&a);
//     }
//     printf("Enter the first number: ");
//     scanf("%d",&b);
//     printf("\nEnter the second number: ");
//     scanf("%d",&c);
//     switch(a)
//     {
//     case 1:
//         printf("%d",b+c);
//         break;
//     case 2:
//         printf("%d",abs(b-c));
//         break;
//     case 3:
//         printf("%d",b*c);
//         break;
//     case 4:
//         printf("%f",(float)b/(float)c);
//         break;
//     default:
//         break;
//     }
//     return 0;
// }

// 19.
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main()
// {
//     char s[30];
//     printf("---- Welcome to Menu-Driven Area finder----\n");
//     printf("\nEnter your shape(triangle, circle, rectangle): ");
//     scanf("%s", s);
//     // while (strcmp(s, "triangle") != 0 || strcmp(s, "circle") != 0 || strcmp(s, "rectangle") != 0)
//     // {
//     //     printf("\nYou enter: %s\n", s);
//     //     printf("There is no shape in the system such as %s\n", s);
//     //     printf("Enter the correct shape (no caps): ");
//     //     scanf("%s", s);
//     // }
//     if (strcmp(s, "triangle") == 0)
//     {
//         float x1, y1, x2, y2, x3, y3;
//         float area;
//         printf("\nEnter x1: ");
//         scanf("%f", &x1);
//         printf("\nEnter y1: ");
//         scanf("%f", &y1);
//         printf("\nEnter x2: ");
//         scanf("%f", &x2);
//         printf("\nEnter y2: ");
//         scanf("%f", &y2);
//         printf("\nEnter x3: ");
//         scanf("%f", &x3);
//         printf("\nEnter y3: ");
//         scanf("%f", &y3);
//         area = 1 / 2 * (x1 * (y2 - y3) - x2 * (y3 - y1) + x3 * (y1 - y2));
//         printf("\nThe area of the following triangle is: %f", abs(area));
//     }
//     else if (strcmp(s, "circle") == 0)
//     {
//         float r;
//         printf("\nRadius of the circle: ");
//         scanf("%f", &r);
//         printf("\nThe area of the circle is: %f", 3.14159 * r * r);
//     }
//     else
//     {
//         float a, b;
//         printf("\nEnter the length: ");
//         scanf("%f", &a);
//         printf("\nEnter the breadth: ");
//         scanf("%f", &b);
//         printf("The are of the rectangle is: %f", a * b);
//     }

//     return 0;
// }

// 20.
// a.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     for(int i=1;i<=10;i++){
//         printf("%d ",i);
//     }
//     return 0;
// }

// b.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int i=51;
//     while (i<61)
//     {
//         printf("%d ",i);
//         i++;
//     }
//     return 0;
// }

// c.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int i=100;
//     do
//     {
//         printf("%d ",i);
//         i--;
//     } while (i>80);
//     return 0;
// }

// d.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,res=1;
//     printf("Enter a number: ");
//     scanf("%d",&a);
//     for (int i = a; i > 0; i--)
//     {
//         res*=i;
//     }
//     printf("The factorial of the number: %d",res);

//     return 0;
// }

// e.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a=0,b=1,c,d;
//     printf("Enter the number you want the fibonacci series upto: \n");
//     scanf("%d",&d);
//     for (; a < d;)
//     {
//         printf("%d ",a);
//         c=b+a;
//         a=b;
//         b=c;
//     }
//     return 0;
// }

// f.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a;
//     printf("Enter a number: \n");
//     scanf("%d",&a);
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d X %d = %d\n",a,i,a*i);
//     }

//     return 0;
// }

// g.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,res=0;
//     printf("Enter number: \n");
//     scanf("%d",&a);
//     for (; a > 0; a=a/10)
//     {
//         res=res*10+a%10;
//     }
//     printf("The reverse of the number you entered is: %d",res);

//     return 0;
// }

// h.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,num;
//     printf("Enter a number: \n");
//     scanf("%d",&num);
//     a=num%10;
//     for (; num>0; num=num/10)
//     {
//         if (num%10>a)
//         {
//             a=num%10;
//         }

//     }
//     printf("The greatest digit in the number: %d",a);

//     return 0;
// }s

// i.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,sum=0;
//     printf("Enter a number: \n");
//     scanf("%d",&a);
//     for (; a>0; a=a/10)
//     {
//         sum+=a%10;
//     }
//     printf("The sum of digits is: %d",sum);

//     return 0;
// }

// j.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,num,b;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     a=num%10;
//     for (;num>0; num=num/10)
//     {
//         b=num%10;
//     }
//     printf("The sum of first and last digits: %d",a+b);
//     return 0;
// }

// 18.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows;
//     printf("Enter the number of rows: ");
//     scanf("%d",&rows);
//     for (int i = 0; i <= rows; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");

//     }

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows;
//     printf("Enter the number rows: ");
//     scanf("%d",&rows);
//     for (int i = 0; i <= rows; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");

//     }

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows;
//     printf("Enter the number rows: ");
//     scanf("%d",&rows);
//     for (int i = 0; i <= rows; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d",i);
//         }
//         printf("\n");

//     }

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows;
//     printf("Enter the number of rows: ");
//     scanf("%d",&rows);
//     for (int i = 0; i < rows; i++)
//     {
//         for (int k = 0; k < rows-i; k++)
//         {
//             printf(" ");
//         }

//         for (int j = rows; j >= rows-i; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows;
//     printf("Enter the number of rows: ");
//     scanf("%d",&rows);
//     for (int i = 0; i <= rows; i++)
//     {
//         for (int k = 0; k < rows-i; k++)
//         {
//             printf(" ");
//         }
//         for (int j = i; j > 0 ; j--)
//         {
//             printf("%d",j);
//         }
//         printf("\n");

//     }

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows;
//     printf("Enter the number of rows: ");
//     scanf("%d",&rows);
//     int spc=rows+3;
//     for (int i = 0; i <= rows; i++)
//     {
//         for (int k = spc; k >=1; k--)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i ; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//         spc--;

//     }

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows,spc;
//     printf("Enter the number of rows you want: ");
//     scanf("%d",&rows);
//     spc=rows+3;
//     for (int i = 0; i <= rows; i++)
//     {
//         for (int k = spc; k >= 1; k--)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//         spc--;
//     }

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows,spc;
//     printf("Enter the number of rows you want: ");
//     scanf("%d",&rows);
//     spc=rows+3;
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int k = spc; k > i; k--)
//         {
//             printf(" ");
//         }
//         for (int j = 0; j < i; j++)
//         {
//             printf("%d ",i);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows,spc,count=1;
//     printf("Enter the number of rows: ");
//     scanf("%d",&rows);
//     spc=rows+3;
//     for (int i = 0; i <= rows; i++)
//     {
//         for (int k = spc; k > i; k--)
//         {
//             printf(" ");
//         }
//         for (int j = 0; j < i; j++,count++)
//         {
//             printf("%d ",count);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for(int i=1; i<=rows; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             if(j % 2 == 1)
//             {
//                 printf("1");
//             }
//             else
//             {
//                 printf("0");
//             }
//         }

//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows;
//     printf("Enter the number of rows: ");
//     scanf("%d",&rows);
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             printf("%d ",i*i);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for (int i = rows; i < (2 * rows) - 1; i++)
//     {
//         for (int j = 0; j < (2 * rows) - 1 - i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows,spc;
//     printf("Enter the number of rows: ");
//     scanf("%d",&rows);
//     spc=rows+3;
//     for (int i = rows; i > 0; i--)
//     {
//         for (int k = i; k < spc; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 0; j < i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
        
        
//     }
    
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows,spc=0,count=0,j,k;
//     printf("Enter the number of rows you want: ");
//     scanf("%d",&rows);
//     for (int i = 0; i < rows; i++)
//     {
//         for (j = 0; j < rows-count; j++)
//         {
//             printf("*");            
//         }
//         for (k = j; k < spc+j; k++)
//         {
//             printf(" ");
//         }
//         for (int z = k; z < 2*rows; z++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         spc+=2;
//         count+=1; 
        
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows,spc,k;
//     printf("Enter the number of rows: ");
//     scanf("%d",&rows);
//     spc=rows+3;
//     for (int i = 0; i <= rows; i++)
//     {
//         for (k = spc; k > i; k--)
//         {
//             printf(" ");
//         }
//         for (int j = 0; j < i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");       
//     }
//     for (int i = rows+1; i < rows*2; i++)
//     {
//         for (k = -2; k <= i-rows; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 0; j < (2*rows)-i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 19.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int arr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter %d element: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("\nArray: ");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// 20.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    return 0;
}