// Write a C program to convert a string to an unsigned long integer.
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     char arr[123];
//     unsigned long ul;
//     printf("Enter an input:\n");
//     fgets(arr,123,stdin);
//     ul=strtoul(arr,NULL,0);
//     printf("%lu\n",ul);
//     return 0;
// }



// Write a C program to convert a string to a double.
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     char gat[123];
//     double a;
//     printf("Enter a number:\n");
//     fgets(gat,123,stdin);
//     a=strtoul(gat,NULL,0);
//     printf("%lf\n",a);
//     return 0;
// }



// Write a C program to generate a random number.
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main()
// {
//     srand(time(NULL));
//     int a=rand()%10;
//     printf("%d\n",a);

//     return 0;
// }




// Write a C program to sort the elements of an array.
// #include<stdio.h>
// #include<stdlib.h>
// int comparetor(const void * x,const void * y){
//     return (*(int*)x-*(int*)y);
// }
// int main()
// {
//     int a;
//     printf("Enter the number of elements you wan tin your array\n");
//     scanf("%d",&a);
//     int arr[a];
//     for (int i = 0; i < a; i++)
//     {
//         printf("Enter the %d element of this array: ",i+1);
//         scanf("%d",&arr[i]);
//         printf("\n");
//     }
//     qsort(arr,a,sizeof(int),comparetor);
//     for (int i = 0; i < a; i++)
//     {
//         printf("The value of %d element is %d\n",i+1,arr[i]);
//     }
//     return 0;
// }



// Write a C program to get the environment string
#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf(getenv("PATH"));
    return 0;
}