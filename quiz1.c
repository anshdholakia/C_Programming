#include<stdio.h>
int main(int argc, char const *argv[])
{   int a;
    printf("In which exams have you passed- maths-1 or science-2 or both-3?");
    scanf("%d",&a);
    if(a==1)
    {
        printf("You have won 15 Rs for your achievement");
    }
    else if(a==2)
    {
        printf("You have won 15 Rs for your achievement");
    }
    else if(a==3)
    {
        printf("You have won 45 Rs!! Congrats");
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}
