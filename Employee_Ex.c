#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    char *ptra;
    char *ptrb;
    char *ptrc;
    

    printf("Welcome to ABC Private Limited.\n");
    printf("We will be taking Employee IDs for only 3 employees\n");
    printf("Employee Number 1 !!\n");
    printf("Enter the number of characters you ID has:\n");
    scanf("%d",&a);
    ptra=(char *)malloc((a+1)*sizeof(char));
    scanf("%s",ptra);
    
    

    printf("Employee Number 2 !!\n");
    printf("Enter the number of characters you ID has:\n");
    scanf("%d",&a);
    ptrb=(char *)malloc((a+1)*sizeof(char));
    scanf("%s",ptrb);



    printf("Employee Number 3 !!\n");
    printf("Enter the number of characters you ID has:\n");
    scanf("%d",&a);

    ptrc=(char *)malloc((a+1)*sizeof(char));

    scanf("%s",ptrc);
  

    printf("Employee 1 ID: %s\n",ptra);
    printf("Employee 2 ID: %s\n",ptrb);
    printf("Employee 3 ID: %s\n",ptrc);



    return 0;
}