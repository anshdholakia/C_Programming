#include<stdio.h>
#include<string.h>
union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};


int main()
{
    union Student s1,s2,s3;
    s1.id=1;
    s1.fav_char='u';
    s1.marks=3;
    strcpy(s1.name,"ansh");
    printf("%d\n",s1.id); //will be corrupted as name is getting executed
    printf("%d\n",s1.marks);//will get corrupted as name is getting executed
    printf("%c\n",s1.fav_char);
    printf("Name is %s",s1.name);



    return 0;
}