// Write a program in C to display the pattern like right angle triangle using an asterisk
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     for (int i = 1; i < 5; i++)
//     {
//         for (int j = 5-i; j < 5; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }



// Write a program in C to display the pattern like right angle triangle with a number.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     for (int i = 5; i > 0; i--)
//     {
//         for (int j = 1; j < 6-i; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     } 
//     return 0;
// }



// Write a program in C to make such a pattern
// like right angle triangle with a number which will repeat a number in a row.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     for(int i=4;i>0;i--){

//         for(int j=5-i;j>0;j--){
//             printf("%d",5-i);
//         }
//         printf("\n");
//     }
//     return 0;
// }




// Write a program in C to make such a pattern like right angle triangle with number increased by 1.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int z=1;
//     for(int i=4;i>0;i--){

//         for(int j=5-i;j>0;j--){
//             printf("%d ",z);
//             z+=1;
//         }
//         printf("\n");
//     }
//     return 0;
// }




// Write a program in C to make such a pattern like a pyramid with numbers increased by 1
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int z=1,rows;
//     printf("Enter the number rows your want:\n");
//     scanf("%d",&rows);
//     int spc=rows+4-1;

//     for (int i = 1; i <= rows; i++)
//     {       
//             for (int k = spc; k >= 1; k--)
//             {
                
//                 printf(" ");
                
                
//             }
//         for (int j = 0; j < i; j++)
//         {
//             printf("%d ",z++);
//         }
//     printf("\n");   
//     spc--;
        
//     }
    
//     return 0;
// }
 



// Write a program in C to make such a pattern like a pyramid with an asterisk.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows;
//     printf("Enter the number rows your want:\n");
//     scanf("%d",&rows);
//     int spc=rows+4-1;

//     for (int i = 1; i <= rows; i++)
//     {       
//         for (int k = spc; k >= 1; k--)
//         {
                
//             printf(" ");
                
                
//         }
//         for (int j = 0; j < i; j++)
//         {
//             printf("* ");
//         }
//     printf("\n");   
//     spc--;
        
//     }
    
//     return 0;
// }



// factorial of a number
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int a,res=1;
//     printf("Enter a number:\n");
//     scanf("%d",&a);
//     for (; a > 0; a--)
//     {
//         res=res*a;
//     }
//     printf("The factorial of the number is: %d",res);
//     return 0;
// }




// Write a program in C to make such a pattern like a pyramid with
// a number which will repeat the number in the same row.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows,stc;
//     printf("Enter the number of rows:\n");
//     scanf("%d",&rows);
//     stc=rows+4-1;
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int k = stc; k>0; k--)
//         {
//             printf(" ");
//         }
//         for (int j = 0; j < i; j++)
//         {
//             printf("%d ",i);
//         }
//     printf("\n");
//     stc--;
        
        
//     }
    
//     return 0;
// }




// Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........]
// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
// int fac(float a){
//     int res=1;
//     for (; a>0 ;a--)
//     {
//         res=res*a;
//     }
//     return res;
    
// }
// int main()
// {
//     float a;
//     int b;
//     printf("Enter the number x:\n");
//     scanf("%f",&a);
//     printf("Enter the number of terms:\n");
//     scanf("%d",&b);
//     float sum=1;
//     float boi;
//     int count=1;
//     if (b>1)
//     {
//         for (int i = 1; i <= b*2; i++)
//         {
//             if (i%2==0)
//             {
//                 if (count%2==0)
//                 {
//                     boi=i/fac(i);
//                     sum=sum+pow(a,boi);
//                     count+=1;
                   
//                 }
//                 else if (count%2==1)
//                 {
//                     boi=i/fac(i);
//                     sum=sum-pow(a,boi);
//                     count+=1;
        
//                 }
                
                
//             }
            
//         }
        
//     }
//     printf("The sum is:%f",sum);
//     return 0;
// }




// Write a program in C to display the pattern
// like a pyramid using asterisk and each row contain an odd number of asterisks. 
// #include <stdio.h>

// void main()
// {
//    int i,j,n;
//    printf("Input number of rows for this pattern :");
//    scanf("%d",&n);
//    n+=1;
//    for(i=0;i<n;i++)
//    {
//      for(j=1;j<=n-i;j++)
//      printf(" ");
//      for(j=1;j<=2*i-1;j++)
//        printf("*");
//      printf("\n");
//    }

// } 




// Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int a,sum=0,b=9;
//     printf("Enter the number of terms:\n");
//     scanf("%d",&a);
//     for (int i = 1; i <= a;i++)
//     {
//         printf("%d ",b);
//         sum+=b;
//         b=b*10+9;
//     }
//     printf("The total sum is %d",sum);
    
//     return 0;
// } 





// Write a program in C to print the Floyd's Triangle
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows;
//     printf("Enter the number of rows\n");
//     scanf("%d",&rows);
//     printf("\n");
//     for (int i = 0; i < rows; i++)
//     {
//         if (i%2==1)
//         {
//                 for (int j = rows-i; j <= rows; j++)
//             {

//                 printf("%d",(j+i+1)%2);
                
//             }
//         }
        
//         else if (i%2==0)
//         {
//                 for (int k = rows-i; k <= rows; k++)
//             {

//                 printf("%d",(k+i)%2);
                
//             }
        
//         }
//         printf("\n");        
        
//     }
    
//     return 0;
// }




// Write a C program to find the Armstrong number for a given range of number.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b,sum=0,r;
//     printf("Enter the start of the range:\n");
//     scanf("%d",&a);
//     printf("Enter the end of the range:\n");
//     scanf("%d",&b);
//     for (int i = a; i < b; i++)
//     {
//         for (int j = i; j > 0; j=j/10)
//         {
//             r=j%10;
//             sum+=r*r*r;

//         }
//         if (sum==i)
//         {
//             printf("%d ",i);
//         }
//         sum=0;
        
//     }
    
//     return 0;
// }




// Write a program in C to display the pattern like a diamond.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows,i,j;
//     printf("Enter the number of rows(in odd) you want in your diamond\n");
//     scanf("%d",&rows);
//     for(i=0;i<(rows/2)+2;i++)
//    {
//             for(j=1;j<=rows-i;j++)
//                 printf(" ");
//             for(j=1;j<=2*i-1;j++)
//                 printf("*");
       
//        printf("\n");
     
//    }
//     for (i = (rows/2); i >= 1; i--)
//    {
       
//         for(j=1;j<=rows-i;j++)
//             printf(" ");
//         for(j=1;j<=2*i-1;j++)
//             printf("*");
//         printf("\n");  
       
       
//    }
   
//     return 0;
// }




// pascal's triangle
// #include <stdio.h>

// void main()
// {
//     int no_row,c=1,blk,i,j;
//     printf("Input number of rows: ");
//     scanf("%d",&no_row);
//     for(i=0;i<no_row;i++)
//     {
//         for(blk=1;blk<=no_row-i;blk++)
//         printf("  ");
//         for(j=0;j<=i;j++)
//         {
//             if (j==0||i==0)
//                 c=1;
//             else
//                c=c*(i-j+1)/j;
//             printf("% 4d",c);
//         }
//         printf("\n");
//     }
// }




// Write a program in C to find the prime numbers within a range of numbers
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b,count=0;
//     printf("Enter the starting range:\n");
//     scanf("%d",&a);
//     printf("Enter the ending range:\n");
//     scanf("%d",&b);
//     if (a<=1)
//     {
//         a=2;
//     }
    
//     for (int i = a; i <= b; i++)
//     {
//         count=0;
//         for (int j = 2; j <= i/2; j++)
//         {
            
//             if (i%j==0)
//             {
//                 count++;
//             }

            
//         }
//         if (count==0)
//             {
//                 printf("%d ",i);
//             }
        
        
//     }
    
//     return 0;
// }




// Write a program in C to display the first n terms of Fibonacci series.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a=1,b,sum=0,range;
//     printf("Enter the nth term of the series:\n");
//     scanf("%d", &range);
//     printf("\nFibonacci series up to %d terms:",range);
//     for (int i = 0; i < range; i++)
//     {
//         printf("%d ",sum);
//         b=sum;
//         sum=a;
//         a=a+b;

//     }
    
//     return 0;
// }




// Write a program in C to display the such a pattern for n number of rows using a
// number which will start with the number 1 and the first and a last number of each row will be 1
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int rows;
//     printf("Enter the number of rows\n");
//     scanf("%d",&rows);
//     for (int i = 0; i <= rows; i++)
//     {
//         for (int j = 0; j < rows-i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d",j);
            
//         }
//         for (int j = i-1; j >= 1 ; j--)
//         {
//             printf("%d",j);
//         }
        

//         printf("\n");
        
        
//     }
    
//     return 0;
// }




// Write a C Program to display the pattern like pyramid using the alphabet.
// #include <stdio.h>

// void main() 
//   {
//    int i, j;
//    char alph = 'A';
//    int n,blk;
//    int ctr = 1;
 
//    printf("Input the number of Letters (less than 26) in the Pyramid : ");
//    scanf("%d", &n);
 
//    for (i = 1; i <= n; i++) 
// 	{
// 	for(blk=1;blk<=n-i;blk++)  
        
// 	printf("  ");
//       for (j = 0; j <= (ctr / 2); j++) {
//          printf("%c ", alph++);
//       }
 
//       alph = alph - 2;
 
//       for (j = 0; j < (ctr / 2); j++) {
//          printf("%c ", alph--);
//       }
//       ctr = ctr + 2;
//       alph = 'A';
//       printf("\n");
//    }
// }



// Write a program in C to convert a decimal number into binary without using an array.
// #include <stdio.h>

// void main()
//      {
//      int n, i, j, binno=0,dn;

//      printf("\n\nConvert Decimal to Binary:\n ");
//      printf("-------------------------\n");

//      printf("Enter a number to convert : ");
//      scanf("%d",&n);

//      dn=n;
//      i=1;

//       for(j=n;j>0;j=j/2)
//        {
//         binno=binno+(n%2)*i;
//         i=i*10;
//         n=n/2;
//        }
     
//      printf("\nThe Binary of %d is %d.\n\n",dn,binno);
//  }
 



// Convert binary to decimal
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int bin,d=0,p=1,j=1,k=1,dec=0;
//     printf("Enter a binary number:\n");
//     scanf("%d",&bin);
//     for (int i = bin; i > 0; i=i/10)
//     {
//         p=i%10;

//         if (j==1)
//         {
//             k=k*1;
//         }
//         else
//         {
//             k=k*2;
//         }
//         dec=dec+(p*k);
//         j++;
        
//     }
//     printf("The decimal number is %d",dec);
    
//     return 0;
// }



// Write a C program to find HCF (Highest Common Factor) of two numbers
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b,n,res=1;
//     printf("Enter the first number:\n");
//     scanf("%d",&a);
//     printf("Enter the second number:\n");
//     scanf("%d",&b);
//     if (a<b)
//     {
//         n=a;
//     }
//     else
//     {
//         n=b;
//     }
    
    
//     for (int i = 1; i <= n; i++)
//     {
//         if (a%i==0 && b%i==0)
//         {
//             if (i>res)
//             {
//                 res=i;
//             }
            
//         }

        
//     }

//     printf("\nH.C.F: %d",res);
    
//     return 0;
// }




// LCM
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b,n,res=1;
//     printf("Enter the first number:\n");
//     scanf("%d",&a);
//     printf("Enter the second number:\n");
//     scanf("%d",&b);
//     if (a<b)
//     {
//         n=a;
//     }
//     else
//     {
//         n=b;
//     }
    
    
//     for (int i = 1; i <= n; i++)
//     {
//         if (a%i==0 && b%i==0)
//         {
//             if (i>res)
//             {
//                 res=i;
//             }
            
//         }

        
//     }

//     printf("\nH.C.F: %d",res);
//     printf("\nL.C.M: %d",(a*b)/res);
    
//     return 0;
// }




// Write a program in C to convert an octal number to a decimal without using an array.
// #include <stdio.h>

// void main()
// {       
//     int n1, n5,p=1,k,ch=1;
//     int dec=0,i=1,j,d;

//     printf("\n\nConvert Octal to Decimal:\n ");
//     printf("-------------------------\n");

// 	printf("Input an octal number (using digit 0 - 7) :");
// 	scanf("%d",&n1);
// 	n5=n1;

//     for(;n1>0;n1=n1/10)
//     {
//        k=n1 % 10;
//        if(k>=8) 
//        { 
//         ch=0;
//        }
//     }

//   switch(ch)
//     {
//     case 0 :
//         printf("\nThe number is not an octal number. \n\n");
//         break;
//     case 1:
//         n1=n5;
//         for (j=n1;j>0;j=j/10)
//         {  
//             d = j % 10;
//                 if(i==1)
//                     p=p*1;
//                 else
//                     p=p*8;

//             dec=dec+(d*p);
//             i++;
//         }
//         printf("\nThe Octal Number : %d\nThe equivalent Decimal  Number : %d \n\n",n5,dec);
//         break;
//     }
// }




// 