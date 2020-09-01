// Write a program in C that reads a forename,
// surname and year of birth and display the names
// and the year one after another sequentially

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     char name[123],sname[123];
//     int birthd;
//     printf("Enter your first name:\n");
//     gets(name);
//     printf("Enter you surname:\n");
//     gets(sname);
//     printf("Enter your year of birthday:\n");
//     scanf("%d",&birthd);
//     printf("%s %s %d\n",name,sname,birthd);
    
//     return 0;
// }



// Write a C program to perform
// addition, subtraction, multiplication and  division of two numbers.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b;
//     char num[123];
//     printf("Enter two numbers seperated by a comma:\n");
//     fgets(num,sizeof(num),stdin);
//     sscanf(num,"%d,%d",&a,&b);
//     printf("Addition of these numbers:%d\n",a+b);
//     printf("Subtraction of these numbers:%d\n",a-b);
//     printf("Multiplication of these numbers:%d\n",a*b);
//     printf("Division of these numbers:%f\n",(float)a/(float)b);

//     return 0;
// }   



// Write a program in C to calculate and print the Electricity bill of a given customer. The customer id., name and unit consumed by the user should be
// taken from the keyboard and display the total amount to pay to the customer.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int IDNO;
//     float bill,sur;
//     char name[123];
//     printf("Enter your name:\n");
//     gets(name);
//     printf("\n");
//     printf("Enter your IDNO:\n");
//     scanf("%d",&IDNO);
//     printf("\n");
//     printf("Enter your bill units:\n");
//     scanf("%f",&bill);
//     printf("\n");
//     if (bill<199){
//         bill=bill*1.20;
//     }
//     else if (bill>=200 && bill<=400)
//     {
//         bill=bill*1.50;
//     }
//     else if (bill>=400 && bill<=600)
//     {
//         bill=bill*1.80;
//     }
//     else if (bill>=600)
//     {
//         bill=bill*2.00;
//     }
//     printf("The amount of charges added and your bill now is:%0.2f\n",bill);
//     printf("\n");
//     if (bill>400)
//     {
//         sur=(bill*15)/100;
//         bill+=(bill*15)/100;
//     }
//     else if (bill<100)
//     {
//         printf("Go to the skolysk station to check it again\n");
//     }
//     printf("Surcharge amount is:%0.2f\n",sur);
//     printf("\n");
//     printf("%s,Your bill after surcharge is:%0.2f\n",name,bill);
    
    

//     return 0;
// }




// Write a program in C to accept a grade and declare the equivalent description
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     char grad;
//     printf("Enter your grade abbreviation:\n");
//     scanf("%c",&grad);
//     switch (grad)
//     {
//     case 'E':
//         printf("You got Excellent\n");
//         break;
//     case 'V':
//         printf("You got Very Good\n");
//         break;
//     case 'G':
//         printf("You got Good\n");
//         break;
//     case 'A':
//         printf("You got Average\n");
//         break;
//     case 'F':
//         printf("You got Fail\n");
//         break;
    
//     default:
//         break;
//     }
//     return 0;
// } 




// Write a program in C to read any Month Number in integer and display the number of days for this month
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a;

//     printf("Enter the number of days\n");
//     scanf("%d",&a);
//     switch (a)
//     {
//     case 1:
//         printf("31 days\n");
//         break;
//     case 3:
//         printf("31 days\n");
//         break;
//     case 5:
//         printf("31 days\n");
//         break;
//     case 7:
//         printf("31 days\n");
//         break;
//     case 9:
//         printf("30 days\n");
//         break;
//     case 11:
//         printf("30 days\n");
//         break;

//     case 4:
//         printf("30 days\n");
//         break;
//     case 6:
//         printf("30 days\n");
//         break;
//     case 8:
//         printf("31 days\n");
//         break;
//     case 10:
//         printf("30 days\n");
//         break;
//     case 12:
//         printf("31 days\n");
//         break;  
//     case 2:
//         printf("28/29 days\n");
//         break;

//     default:
//         break;
//     }

//     return 0;
// }



// Write a program in C which is a Menu-Driven Program to perform a simple calculation
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,b,s;
//     printf("Input:\n");
//     scanf("%d",&a);
//     scanf("\n%d",&b);
//     scanf("\n%d",&s);
//     switch (s)
//     {
//     case 1:
//         printf("The sum is %d",a+b);
//         break;
//     case 2:
//         printf("The sub is %d",a-b);
//         break;
//     case 3:
//         printf("The multi is %d",a*b);
//         break;
//     case 4:
//         printf("The division is %f",(float)a/(float)b);
//         break;
    
//     default:
//         break;
//     }

//     return 0;
// }
