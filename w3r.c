// Write a C program that read 5 numbers and counts the number of positive
// numbers and print the average of all positive values. 

// #include<stdio.h>
// int main()
// {
//     int a=0,num=0;
//     int arr[5];

//     for (int i=0; i < 5; i++)
//     {
//         printf("\nEnter %d number:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i]>0)
//         {
//             a+=arr[i];
//             num+=1;
//         }
        
//     }
//     printf("\n");
//     printf("The number of positive numbers:%d\n",num);
//     printf("\n");
//     printf("The mean of positive numbers is %d\n",a/num);

// }



// Write a C program to find and
// print the square of each one of the even values from 1 to a specified value.
// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
// int main()
// {
//     int a;
//     printf("Enter a number you want that goes from 1 to that number printing its even numbers squares:\n");
//     scanf("%d",&a);
//     for (int i = 1; i < a+1; i++)
//     {
//         if (i%2==0)
//         {
//             int b=pow(i,2);
//             printf("%d^2=%d\n",i,b);
//         }
        
//     }
    
//     return 0;
// }



// Write a C program to read a password until it is correct.
// For wrong password print "Incorrect password" and for correct password print "Correct password" and quit the program.
// The correct password is 1234.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a;
    
//     do
//     {
//         printf("Enter the 4 digit password:\n");
//         scanf("%d",&a);
//         while (a!=1234)
//         {
//             printf("Incorrect password try again\n");
//             scanf("%d",&a);

//         }
        
//     } while (a!=1234);
//     printf("Correct password");
    
    
//     return 0;
// }



//Write a C program to read the coordinates(x, y) (in Cartesian system) and
// find the quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int x,y;
//     printf("Enter x and y coordinates:\n");
//     printf("x:");
//     scanf("%d",&x);
//     printf("y:");
//     scanf("%d",&y);
//     if (x>0 && y>0)
//     {
//         printf("1st Quadrant\n");
//     }
//     else if (x<0 && y>0)
//     {
//         printf("2nd Quadrant\n");
//     }
//     else if (x>0 && y<0)
//     {
//         printf("4th Quadrant\n");
//     }
//     else if (x<0 && y<0)
//     {
//         printf("3th Quadrant\n");
//     }
//     else
//     {
//         printf("Incorrect input\n");
//     }
    

//     return 0;
// }








//Write a C program to print 3 numbers in a line, starting from 1 and print n lines.
// Accept number of lines (n, integer) from the user. 
// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
// int main()
// {
//     int a,b=1,j=0;
//     printf("Input the number of lines you want:\n");
//     scanf("%d",&a);
//     for (int i = 1; i < a+1; i++)
//     {
//         for (j=i; j < a*3, b<4;)
//         {
//             printf("%d ",pow(j,b));
//             b+=1;
//         }
//         b=1;
//         printf("\n");
//     }
    
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
// int main()
// {
//     int a,b=0,j=1,c;
//     printf("Input the number of lines you want:\n");
//     scanf("%d",&a);
//     printf("Input the number of characters you want in one line:\n");
//     scanf("%d",&c);
//     for (int i = 1; i < a+1; i++)
//     {
//         for (; j < a*c, b<c;j++)
//         {
//             printf("%d ",j);
//             b+=1;
//         }
//         b=0;
//         printf("\n");
//     }
    
//     return 0;
// }



// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     float S=0;
//     for (float i = 1; i < 51; i++)
//     {
//         S+=(1/i);
//     }
//     printf("The value of S: %f",S);
    
//     return 0;
// }



// Write a C program that reads an integer and find all its divisor
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a;
//     printf("Input an integer\n");
//     scanf("%d",&a);
//     printf("\n");
//     for (int i = 1; i < a+1; i++)
//     {
//         if (a%i==0)
//         {
//             printf("%d\n",i);
//         }
        
//     }
    


//     return 0;
// }




// Write a C program to read an array of length 5 and
// print the position and value of the array elements of value less than 5.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int arr[6];
//     for (int i = 0; i < 6; i++)
//     {
//         printf("Enter %d element of this array:\n",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("\n");

//     for (int i = 5; i > -1; i--)
//     {    
//         printf("A[%d]=%d\n",5-i,arr[i]);     
//     }
    
    
//     return 0;
// }



// Write a C program to reverse and print a given number.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,rev=0;
//     printf("Enter a number you want the reverse of:\n");
//     scanf("%d",&a);
//     for (; a > 0;) 
//     {
//         rev=(rev*10)+a%10;
//         a=a/10;    
//     }

//     printf("The reverse of the number you entered is: %d",rev);

    
    
    
//     return 0;
// }



//Write a C program that accepts 4 real numbers from the keyboard and print out the difference of the maximum and minimum values of these four numbers. Go to the editor
// Input four numbers: 1.54 1.236 1.3625 1.02
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int arr[4];
//     int a=arr[0];
//     int b=arr[0];
//     for(int i=0;i<4;i++){
//         printf("Enter the %d element:\n",i+1);
//         scanf("%d",&arr[i]);
//     }

//     for (int i = 0; i < 4; i++)
//     {
//         if (a<arr[i])
//         {
//             a=arr[i];
//         }
        
//     }

    

//     for (int i = 0; i < 4; i++)
//     {
//         if (b>arr[i])
//         {
//             b=arr[i];
//         }
        
//     }

//     printf("The difference between the highest and lowest is: %d",a-b);
// }
    



// Write a C program to create enumerated data type for 7 days and display their values in integer constants.
// #include <stdio.h>
// int main()
// {
// enum week{Sun, Mon, Tue, Wed, Thu, Fri, Sat};
// printf("Sun = %d", Sun);
// printf("\nMon = %d", Mon);
// printf("\nTue = %d", Tue);
// printf("\nWed = %d", Wed);
// printf("\nThu = %d", Thu);
// printf("\nFri = %d", Fri);
// printf("\nSat = %d", Sat);
// return 0;
// }



// Write a C program that accepts a real number x and prints out the
// corresponding value of sin(1/x) using 4-decimal places.
// #include<stdio.h>
// #include<string.h>
// #include<math.h>
// int main()
// {
//     double x;

//     printf("Enter the value of x:\n");
//     scanf("%lf",&x);
//     double b=sin(1/x);
    
//     printf("The value for sin(1/x):%0.4lf",b);
    
//     return 0;
// }




//Write a C program that accepts integers from the user until a zero or a negative number,
// display the number of positive values, the minimum value,
// the maximum value and the average of all numbers.
// #include <stdio.h>
//   int main() {
//     int a, ctr = 0, min_num, max_num, s = 0;
//     double avg;
//     printf("Input a positive integer:\n");
//     scanf("%d", &a);
//     if (a <= 0) 
//     {
//       printf("No positive number entered\n");
//       return 0;
//     }
//     min_num = a;
//     max_num = a;
//     while (a > 0) {
//       s += a;
//       ctr++;
//       max_num = a > max_num ? a : max_num;
//       min_num = a < min_num ? a : min_num;
//       printf("Input next positive integer:\n");
//       scanf("%d", &a);
//     }
//     avg = s / (double) ctr;
//     printf("Number of positive values entered is %d\n", ctr);
//     printf("Maximum value entered is %d\n", max_num);
//     printf("Minimum value entered is %d\n", min_num);
//     printf("Average value is %0.4lf\n", avg);
//     return 0;
//   }



//Write a C program that prints out the prime numbers between 1 and 200.
// The output should be such that each row contains a maximum of 20 prime numbers.
// #include <stdio.h>
//   int main() {
//     int i, j, flag, ip = 0;
//     printf("The prime numbers between 1 and 199 are:\n");
//     for (i = 2; i < 199; i++) 
//     {
//       flag = 1;
//       for (j = 2; j <= i / 2 && flag == 1; j++) 
//       {
//         if (i % j == 0) {
//           flag = 0;
//         }
//       }
//       if (flag == 1) 
//       {
//         printf("%5d ", i);
//         ip++;
//         if (ip % 10 == 0) 
//         {
//           printf("\n");
//         }
//       }
//     }
//     printf("\n");
//     return 0;
//   }



// Write a C program that generates 50 random numbers between -0.5 and 0.5 and writes them in a file rand.dat.
// The first line of ran.dat contains the number of data and the next 50 lines contains the 50 random numbers.
// #include<stdio.h>
// #include<stdlib.h>
// float random(int a,int b){
    
// }
// int main()
// {
//     FILE *ptrf=NULL;

//     return 0;
// }



//Write a C programming that reads the side
// (side sizes between 1 and 10 ) of a square and prints a hollow square using hash (#) character.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a;
//     printf("Enter the length of a side of the square:\n");
//     scanf("%d",&a);
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < a; j++)
//         {
//             if (i==0||i==(a-1))
//             {
//                 printf("#");
//             }
//             else if (j==0||j==(a-1))
//             {
//                 printf("#");
//             }
//             else
//             {
//                 printf(" ");
//             }
            
            
            
                       
//         }
//         printf("\n");

//     }
    
//     return 0;
// }




// Write a C programming to print a table of all the Roman numeral equivalents
// of the decimal numbers in the range 1 to 50.
// #include<stdio.h>
// int main()
// {
// int n;
// printf("Decimal  Roman\n");
// printf("numbers  numerals\n");
// printf("-------------------\n");
// for(int i=1; i<=100; i++)
// {
// n = i;
// printf("  %d        ",i);
// while(n != 0)
// {
// if (n >= 1000)
// {
// printf("M");
// n -= 1000;
// }
// else if (n >= 900)
// {
// printf("CM");
// n -= 900;
// }
// else if (n >= 500)
// {
// printf("D");
// n -= 500;
// }
// else if (n >= 400)
// {
// printf("CD");
// n -= 400;
// }
// else if (n >= 100)
// {
// printf("C");
// n -= 100;
// }
// else if (n >= 90)
// {
// printf("XC");
// n -= 90;
// }
// else if (n >= 50)
// {
// printf("L");
// n -= 50;
// }
// else if (n >= 40)
// {
// printf("XL");
// n -= 40;
// }
// else if (n >= 10)
// {
// printf("X");
// n -= 10;
// }
// else if (n >= 9)
// {
// printf("IX");
// n -= 9;
// }
// else if (n >= 5)
// {
// printf("V");
// n -= 5;
// }
// else if (n >= 4)
// {
// printf("IV");
// n -= 4;
// }
// else if (n >= 1)
// {
// printf("I");
// n -= 1;
// }
// }
// printf("\n");
// }
// return 0;
// } 


// prime numbers
#include<stdio.h>

int main()
{
    int n,i = 3, count, c;

    printf("\nEnter the number of prime numbers required :  ");
    scanf("%d", &n);

    if(n >= 1)
    {
        printf("\n\nFirst %d prime numbers are :  ", n);
        printf("2 ");
    }

    // iteration for n prime numbers
    // i is the number to be checked in each iteration starting from 3
    for(count = 2; count <= n; i++)  
    {
        // iteration to check c is prime or not
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }

        if(c == i)  // c is prime
        {
            printf("%d ", i);
            count++;    // increment the count of prime numbers
        }

    }
    return 0;
}

