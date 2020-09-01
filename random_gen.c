// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main()
// {
//     srand(time(NULL));  //srand generates random variables at is defined in the stdlib.h libarary
//     printf("The time number between 0 to 100 is:%d\n",rand()%100);

//     return 0;
// }





// Write a C programming that reads the side (side sizes between 1 and 10 ) of a 
// square and prints square using hash (#) character.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("Enter the number of rows/coloumns:\n");
    scanf("%d",&a);
    for(int i=0;i<a;i++){

        for(int j=0;j<a;j++){
            printf("# ");
        }
        printf("\n");
    }

    return 0;
}
