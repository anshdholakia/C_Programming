#include<stdio.h>


struct Student{
    int id;
    int marks;
    char fav_char;
};

int main()
{

    struct Student ansh,hriday,sidd;
    ansh.id=4;
    hriday.marks=99;
    ansh.fav_char='p';
    hriday.fav_char='k';
    sidd.fav_char = 'o';
    sidd.marks=99;
    ansh.marks=99;
    hriday.id=22;
    sidd.id=28;
    printf("For Ansh:\n");
    printf("%d,%d,%c", ansh.id,ansh.marks,ansh.fav_char);
    printf("For Hriday:\n");
    printf("%d,%d,%c",hriday.id,hriday.marks,hriday.fav_char);
    printf("For sidd\n");
    printf("%d, %d, %c",sidd.id,sidd.marks,sidd.fav_char);

    return 0;


}