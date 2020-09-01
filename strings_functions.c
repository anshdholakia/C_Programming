// // some of the functions of c 

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s1[]="ansh";
//     char s2[]="dholakia";
//     char s3[323];


//     printf("The length of s1 is: %d\n",strlen(s1));

//     printf("The reverse of s1 is:");
//     puts(strrev(s1));

//     strcpy(s3,strcat(s1,s2));  //you cannot write s3=strcat(s1,s2)
//     puts(s3);
//     return 0;
// }


#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]=" is a friend of ";
    char s2[2342];
    char s3[3243];
    char s4[3235];
    printf("Enter first name:\n");
    gets(s2);
    printf("Enter second name:\n");
    gets(s3);
    
    strcpy(s4,strcat(s2,s1));
    puts(strcat(s4,s3));


    return 0;
}