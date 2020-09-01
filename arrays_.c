//array is a collection of data items of same type
#include<stdio.h>

int main()
{

    // marks[0]=88;
    // marks[1]=88;
    // marks[2]=88;
    // marks[3]=88;
    // marks[4]=88; 
    // instead writing the way above cn write array like this as well
    int marks[5]={88,88,88,88,88};
    for (int i = 1; i<5; i++)
    {
        printf("Marks of student %d is %d\n",i,marks[i]);
    }
    
    
    return 0;
}
