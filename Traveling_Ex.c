#include <stdio.h>

struct Driver
{
    char Name[30];
    int ID;
    char Route[30];
    int Kms;

} s1, s2, s3;

int main()
{
    int a;

    printf("Welcome to the TRAVEL AGENCY!\n");

    printf("Enter your name\n");
    scanf("%s",s1.Name);

    printf("Enter your ID\n");
    scanf("%d", &s1.ID);

    printf("Enter your route\n");
    scanf("%s",s1.Route);

    printf("Enter your avg Kms\n");
    scanf("%d", &s1.Kms);

    printf("For the second driver\n");

    printf("Enter your name\n");
    scanf("%s",s2.Name);

    printf("Enter your ID\n");
    scanf("%d", &s2.ID);

    printf("Enter your route\n");
    scanf("%s",s2.Route);

    printf("Enter your avg Kms\n");
    scanf("%d", &s2.Kms);

    printf("For the third driver\n");

    printf("Enter your name\n");
    scanf("%s",s3.Name);

    printf("Enter your ID\n");
    scanf("%d", &s3.ID);

    printf("Enter your route\n");
    scanf("%s",s3.Route);

    printf("Enter your avg Kms\n");
    scanf("%d", &s3.Kms);

    printf("Thank you for Entering your details\n");

    printf("%s, ID = %d, %s, Kms = %d\n", s1.Name, s1.ID, s1.Route, s1.Kms);
    printf("%s, ID = %d, %s, Kms = %d\n", s2.Name, s2.ID, s2.Route, s2.Kms);
    printf("%s, ID = %d, %s, Kms = %d\n", s3.Name, s3.ID, s3.Route, s3.Kms);

    return 0;
}